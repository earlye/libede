#ifndef h0C48285F_9443_4042_A774_2F6804232717
#define h0C48285F_9443_4042_A774_2F6804232717

#include <boost/noncopyable.hpp>
#include <cstdio>

namespace libede
{
  class auto_FILE
    : boost::noncopyable
  {
  public:
    auto_FILE()
      : handle_(NULL)
    { }

    auto_FILE(FILE* value)
      : handle_(value)
    {}

    ~auto_FILE()
    {
      reset(NULL);
    }

    void reset(FILE* value)
    {
      if (value==handle_)
        return;
      if (handle_!=NULL)
        fclose(handle_);
      handle_=value;
    }

    FILE* get() const
    {
      return handle_;
    }

  private:
    FILE* handle_;
  };

}

#endif
