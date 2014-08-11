#ifndef hF665006E_54A4_4ABF_B7C3_BAEF1CD0500C
#define hF665006E_54A4_4ABF_B7C3_BAEF1CD0500C

#include <boost/format.hpp>

namespace libede
{
  class format
  {
  public:
    format( std::string const& fmt )
      : formatter_(fmt)
    {}

    template< typename OTHER >
    format& operator%(OTHER const& value)
    {
      formatter_ % value;
      return *this;
    }

    operator std::string() const
    {
      return boost::str(formatter_);
    }

  private:
    boost::format formatter_;
  };
}

#endif
