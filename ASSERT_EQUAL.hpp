#ifndef h753613E1_E7F6_4302_9783_3CFA16618D26
#define h753613E1_E7F6_4302_9783_3CFA16618D26

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/stringize.hpp>

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

namespace libede
{
  template< typename EXPRESSION1_TYPE , typename EXPRESSION2_TYPE >
  void assert_equal( std::string const& file , int line , EXPRESSION1_TYPE const& ex1, EXPRESSION2_TYPE const& ex2, std::string const& ex1_str , std::string const& ex2_str )
  {
    if ( ex1 == ex2 )
      return;

    std::stringstream message;
    message << file << ":" << line << ": Expression \"" << ex1_str << " == " << ex2_str << "\" fails, because \"" << ex1 << " != " << ex2 << "\"";
    throw std::runtime_error( message.str() );
  }
}
#define ASSERT_EQUAL(EXPRESSION_A,EXPRESSION_B) (::libede::assert_equal( __FILE__ , __LINE__ , EXPRESSION_A , EXPRESSION_B , BOOST_PP_STRINGIZE( EXPRESSION_A ) , BOOST_PP_STRINGIZE( EXPRESSION_B ) ) )


#endif
