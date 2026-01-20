#ifndef REPLXX_CONVERSION_HXX_INCLUDED
#define REPLXX_CONVERSION_HXX_INCLUDED 1

#include "ConvertUTF.h"

#ifdef __has_include
#if __has_include( <version> )
#include <version>
#endif
#endif

#if ! defined( __cpp_lib_char8_t )
namespace replxx {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wc++20-compat"
typedef unsigned char char8_t;
#pragma GCC diagnostic pop
}
#endif

namespace replxx {

ConversionResult copyString8to32( char32_t* dst, int dstSize, int& dstCount, char const* src );
ConversionResult copyString8to32( char32_t* dst, int dstSize, int& dstCount, char8_t const* src );
int copyString32to8( char* dst, int dstSize, char32_t const* src, int srcSize );

namespace locale {
extern bool is8BitEncoding;
}

}

#endif
