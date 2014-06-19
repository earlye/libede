#ifndef h9D93A481_F0D8_41E5_8459_4E09AE973DCA
#define h9D93A481_F0D8_41E5_8459_4E09AE973DCA

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/stringize.hpp>

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

namespace libede
{
  void assert_false( std::string const& file , int line , bool value, std::string const& value_str )
  {
    if ( !value )
      return;

    std::stringstream message;
    message << file << ":" << line << ": Expression \"" << value_str << "\" is false.";
    throw std::runtime_error( message.str() );
  }
}
#define ASSERT_FALSE(EXPRESSION) (::libede::assert_false( __FILE__ , __LINE__ , EXPRESSION , BOOST_PP_STRINGIZE( EXPRESSION )))


#endif
