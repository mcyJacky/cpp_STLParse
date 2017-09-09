#ifndef _STLREADWRITE_EXPORT_
#define _STLREADWRITE_EXPORT_ 1


#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( STLREADWRITE_LIBRARY_STATIC )
    #    define STLREADWRITE_EXPORT
	#  elif defined( STLREADWRITE_EXPORTS )
    #    define STLREADWRITE_EXPORT   __declspec(dllexport)
    #  else
    #    define STLREADWRITE_EXPORT   __declspec(dllimport)
    #  endif
#else
    #  define STLREADWRITE_EXPORT
#endif


#endif // _STLREADWRITE_EXPORT_

