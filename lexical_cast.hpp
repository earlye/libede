#ifndef h7F2A9C96_6ABD_4B22_AB53_82F19B99A388
#define h7F2A9C96_6ABD_4B22_AB53_82F19B99A388

#include <iostream>
#include <sstream>

namespace libede
{
  // Similar to boost::lexical_cast, but rather than throw an
  // exception on failure, return default_value.  At some point, may
  // want to consider using some template magic to optimize.

  template< typename TARGET_TYPE , typename SOURCE_TYPE >
  TARGET_TYPE lexical_cast( SOURCE_TYPE source , TARGET_TYPE default_value )
  {
    TARGET_TYPE result = default_value;
    std::stringstream s;
    s << source;
    s.seekg( 0 );
    s >> result;
    return result;
  }
}

#endif
