#ifndef h3C4B2A19_11D3_4AB0_A60B_04458C5CF1C6
#define h3C4B2A19_11D3_4AB0_A60B_04458C5CF1C6

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/stringize.hpp>

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

namespace libede
{
  void assert_true( std::string const& file , int line , bool value, std::string const& value_str )
  {
    if ( value )
      return;

    std::stringstream message;
    message << file << ":" << line << ": Expression \"" << value_str << "\" is false.";
    throw std::runtime_error( message.str() );
  }
}
#define ASSERT_TRUE(EXPRESSION) (::libede::assert_true( __FILE__ , __LINE__ , EXPRESSION , BOOST_PP_STRINGIZE( EXPRESSION )))


#endif
