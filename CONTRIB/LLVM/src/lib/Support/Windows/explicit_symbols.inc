/* in libgcc.a */

//Maeiky add



#include "CpcDos/CpcDosExplicitSymbol.h"




//Pure virtual functions can get called during object construction/destruction. If that happens, __cxa_pure_virtual() gets called to report the error
//Why is it acceptable to code __cxa_pure_virtual() as an infinite loop?
//Well, this is at least safe; it does something predictable. It would be more useful to abort the program and report the error. An infinite loop would be awkward to debug, though, unless you have a debugger that can interrupt execution and give a stack backtrace.
 EXPLICIT_SYMBOL(__cxa_pure_virtual)

///////////////////////////

 EXPLICIT_SYMBOL(atexit)
 ////////////////////////////


 //////// We have all symbol in llvm /////////////

 ////// Not found in CpcDos!! ////////
 #ifndef CpcDos
	EXPLICIT_SYMBOL(__mingw_vprintf) //Only on mingw?
	EXPLICIT_SYMBOL(_Znwj) //New
	EXPLICIT_SYMBOL(_Znaj) //New[]?
	#define HAVE__ALLOCA  //undefined reference to `_alloca'
	#define HAVE___CHKSTK //undefined reference to `__chkstk'
	#define HAVE___CHKSTK_MS //undefined reference to `__chkstk_ms'
#else

 	EXPLICIT_SYMBOL2(_Znwj, _Znwm) //New
    EXPLICIT_SYMBOL2(_Znaj, _Znam) //New[]
#endif

///////////////////////

//#define HAVE___ALLOCA
//#define HAVE____CHKSTK
//#define HAVE____CHKSTK_MS


EXPLICIT_SYMBOL(_ZdlPv) //delete op


/////////Base Fnc add/////////
 EXPLICIT_SYMBOL(clearerr)
 EXPLICIT_SYMBOL(fclose)
 EXPLICIT_SYMBOL(feof)
 EXPLICIT_SYMBOL(ferror)
 EXPLICIT_SYMBOL(fflush)
 EXPLICIT_SYMBOL(fgetc)
 EXPLICIT_SYMBOL(fgetpos)
 EXPLICIT_SYMBOL(fgets)
 EXPLICIT_SYMBOL(fopen)
 EXPLICIT_SYMBOL(fprintf)
 EXPLICIT_SYMBOL(fputc)
 EXPLICIT_SYMBOL(fputs)
 EXPLICIT_SYMBOL(fread)
 EXPLICIT_SYMBOL(freopen)
 EXPLICIT_SYMBOL(fscanf)
 EXPLICIT_SYMBOL(fseek)
 EXPLICIT_SYMBOL(fsetpos)
 EXPLICIT_SYMBOL(ftell)
 EXPLICIT_SYMBOL(fwrite)
 EXPLICIT_SYMBOL(getc)
 EXPLICIT_SYMBOL(getchar)
 EXPLICIT_SYMBOL(gets)
 EXPLICIT_SYMBOL(perror)
 EXPLICIT_SYMBOL(printf)
 EXPLICIT_SYMBOL(putc)
 EXPLICIT_SYMBOL(putchar)
 EXPLICIT_SYMBOL(puts)
 EXPLICIT_SYMBOL(remove)
 EXPLICIT_SYMBOL(rename)
 EXPLICIT_SYMBOL(rewind)
 EXPLICIT_SYMBOL(scanf)
 EXPLICIT_SYMBOL(setbuf)
 EXPLICIT_SYMBOL(setvbuf)
 EXPLICIT_SYMBOL(snprintf)
 EXPLICIT_SYMBOL(sprintf)
 EXPLICIT_SYMBOL(sscanf)
 EXPLICIT_SYMBOL(tmpfile)
 EXPLICIT_SYMBOL(tmpnam)
 EXPLICIT_SYMBOL(ungetc)
 EXPLICIT_SYMBOL(vfprintf)
 EXPLICIT_SYMBOL(vfscanf)
 EXPLICIT_SYMBOL(vprintf)
 EXPLICIT_SYMBOL(vscanf)
 EXPLICIT_SYMBOL(vsnprintf)
 EXPLICIT_SYMBOL(vsprintf)
 EXPLICIT_SYMBOL(vsscanf)


 EXPLICIT_SYMBOL(malloc)
 EXPLICIT_SYMBOL(realloc)
 EXPLICIT_SYMBOL(calloc)
 EXPLICIT_SYMBOL(free)

 EXPLICIT_SYMBOL(memcpy)
 EXPLICIT_SYMBOL(memset)

 //EXPLICIT_SYMBOL(strcmp) //Cannot be used
 EXPLICIT_SYMBOL(strncmp)
 EXPLICIT_SYMBOL(strtol)


////////////////////////////////



#define HAVE___DIVDI3
#define HAVE___FIXDFDI
#define HAVE___FIXSFDI
#define HAVE___FIXUNSDFDI
#define HAVE___FIXUNSSFDI
#define HAVE___FLOATDIDF
#define HAVE___FLOATDISF
#define HAVE___LSHRDI3
#define HAVE___MODDI3
#define HAVE___UDIVDI3
#define HAVE___UMODDI3
/////////////////////////////////////////////

#ifdef HAVE__ALLOCA
  EXPLICIT_SYMBOL(_alloca)
  EXPLICIT_SYMBOL2(alloca, _alloca)
#endif
#ifdef HAVE___ALLOCA
  EXPLICIT_SYMBOL(__alloca)
#endif
#ifdef HAVE___CHKSTK
  EXPLICIT_SYMBOL(__chkstk)
#endif
#ifdef HAVE___CHKSTK_MS
  EXPLICIT_SYMBOL(__chkstk_ms)
#endif
#ifdef HAVE____CHKSTK
  EXPLICIT_SYMBOL(___chkstk)
#endif
#ifdef HAVE____CHKSTK_MS
  EXPLICIT_SYMBOL(___chkstk_ms)
#endif
#ifdef HAVE___MAIN
  EXPLICIT_SYMBOL(__main) // FIXME: Don't call it.
#endif

#ifdef HAVE___ASHLDI3
  EXPLICIT_SYMBOL(__ashldi3)
#endif
#ifdef HAVE___ASHRDI3
  EXPLICIT_SYMBOL(__ashrdi3)
#endif
#ifdef HAVE___CMPDI2 // FIXME: unused
  EXPLICIT_SYMBOL(__cmpdi2)
#endif
#ifdef HAVE___DIVDI3
  EXPLICIT_SYMBOL(__divdi3)
#endif
#ifdef HAVE___FIXDFDI
  EXPLICIT_SYMBOL(__fixdfdi)
#endif
#ifdef HAVE___FIXSFDI
  EXPLICIT_SYMBOL(__fixsfdi)
#endif
#ifdef HAVE___FIXUNSDFDI
  EXPLICIT_SYMBOL(__fixunsdfdi)
#endif
#ifdef HAVE___FIXUNSSFDI
  EXPLICIT_SYMBOL(__fixunssfdi)
#endif
#ifdef HAVE___FLOATDIDF
  EXPLICIT_SYMBOL(__floatdidf)
#endif
#ifdef HAVE___FLOATDISF
  EXPLICIT_SYMBOL(__floatdisf)
#endif
#ifdef HAVE___LSHRDI3
  EXPLICIT_SYMBOL(__lshrdi3)
#endif
#ifdef HAVE___MODDI3
  EXPLICIT_SYMBOL(__moddi3)
#endif
#ifdef HAVE___UDIVDI3
  EXPLICIT_SYMBOL(__udivdi3)
#endif
#ifdef HAVE___UMODDI3
  EXPLICIT_SYMBOL(__umoddi3)
#endif

/* msvcrt */
#if defined(_MSC_VER)
  EXPLICIT_SYMBOL2(alloca, _alloca_probe)

#ifdef _M_IX86
#define INLINE_DEF_FLOAT_SYMBOL(SYM, ARGC) INLINE_DEF_SYMBOL##ARGC(float, SYM)
  INLINE_DEF_FLOAT_SYMBOL(acosf, 1)
  INLINE_DEF_FLOAT_SYMBOL(asinf, 1)
  INLINE_DEF_FLOAT_SYMBOL(atanf, 1)
  INLINE_DEF_FLOAT_SYMBOL(atan2f, 2)
  INLINE_DEF_FLOAT_SYMBOL(ceilf, 1)
  INLINE_DEF_FLOAT_SYMBOL(cosf, 1)
  INLINE_DEF_FLOAT_SYMBOL(coshf, 1)
  INLINE_DEF_FLOAT_SYMBOL(expf, 1)
  INLINE_DEF_FLOAT_SYMBOL(floorf, 1)
  INLINE_DEF_FLOAT_SYMBOL(fmodf, 2)
  INLINE_DEF_FLOAT_SYMBOL(logf, 1)
  INLINE_DEF_FLOAT_SYMBOL(powf, 2)
  INLINE_DEF_FLOAT_SYMBOL(sinf, 1)
  INLINE_DEF_FLOAT_SYMBOL(sinhf, 1)
  INLINE_DEF_FLOAT_SYMBOL(sqrtf, 1)
  INLINE_DEF_FLOAT_SYMBOL(tanf, 1)
  INLINE_DEF_FLOAT_SYMBOL(tanhf, 1)

  // These were added in VS 2013.
#if (1800 <= _MSC_VER && _MSC_VER < 1900)
  INLINE_DEF_FLOAT_SYMBOL(copysignf, 2)
  INLINE_DEF_FLOAT_SYMBOL(fminf, 2)
  INLINE_DEF_FLOAT_SYMBOL(fmaxf, 2)
#endif
#undef INLINE_DEF_FLOAT_SYMBOL
#endif

#endif
