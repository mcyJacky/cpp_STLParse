#ifndef _STLSTRUCT_EXPORT_
#define _STLSTRUCT_EXPORT_ 1


#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( STLSTRUCT_LIBRARY_STATIC )
    #    define STLSTRUCT_EXPORT
	#  elif defined( STLSTRUCT_EXPORTS )
    #    define STLSTRUCT_EXPORT   __declspec(dllexport)
    #  else
    #    define STLSTRUCT_EXPORT   __declspec(dllimport)
    #  endif
#else
    #  define STLSTRUCT_EXPORT
#endif


#endif // _STLSTRUCT_EXPORT_

