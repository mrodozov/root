/* config.h.win32.  Handcrafted for Microsoft C and gcc -mno-cygwin */

#if ! (defined(_MSC_VER) || defined(__GNUC__))
#error Unrecognized Win32 compiler, edit config.h.win32 by hand
#endif

/* Define if using alloca.c.  */
/* #undef C_ALLOCA */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define to one of _getb67, GETB67, getb67 for Cray-2 and Cray-YMP systems.
   This function is required for alloca.c support on those systems.  */
/* #undef CRAY_STACKSEG_END */

/* Define if you have a working `mmap' system call.  */
/* #undef HAVE_MMAP */

/* Define to empty, or __inline if that's what your compiler wants.  */
#define inline __inline

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE*/

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
 STACK_DIRECTION > 0 => grows toward higher addresses
 STACK_DIRECTION < 0 => grows toward lower addresses
 STACK_DIRECTION = 0 => direction of growth unknown
 */
/* #undef STACK_DIRECTION */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Other stuff */
#define ENABLE_NLS 1
#define GTK_COMPILED_WITH_DEBUGGING "minimum"

/* #undef HAVE_CATGETS */
/* #undef HAVE_DIRENT_H */
#define HAVE_GETTEXT 1
/* #undef HAVE_IPC_H */
/* #undef HAVE_LC_MESSAGES */
/* #undef HAVE_PWD_H */
/* #undef HAVE_SHM_H */
/* #undef HAVE_STPCPY */
/* #undef HAVE_XSHM_H */
#define HAVE_SHAPE_EXT 1
/* #undef HAVE_SYS_SELECT_H */
/* #undef HAVE_SYS_TIME_H */
/* #undef HAVE_XCONVERTCASE */

/* #undef NO_FD_SET */

/* #undef XINPUT_NONE */
/* #undef XINPUT_GXI */
/* #undef XINPUT_XFREE */
#define XINPUT_WIN32 1

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define if you have the __argz_count function.  */
/* #undef HAVE___ARGZ_COUNT */

/* Define if you have the __argz_next function.  */
/* #undef HAVE___ARGZ_NEXT */

/* Define if you have the __argz_stringify function.  */
/* #undef HAVE___ARGZ_STRINGIFY */

/* Define if you have the broken_wctype function.  */
/* #undef HAVE_BROKEN_WCTYPE */

/* Define if you have the dcgettext function.  */
/* #undef HAVE_DCGETTEXT */

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getpagesize function.  */
#define HAVE_GETPAGESIZE 1

/* Define if you have the lstat function.  */
/* #undef HAVE_LSTAT */

/* Define if you have the munmap function.  */
/* #undef HAVE_MUNMAP */

/* Define if you have the putenv function.  */
#define HAVE_PUTENV 1
#define putenv _putenv

/* Define if you have the setenv function.  */
/* #undef HAVE_SETENV */

/* Define if you have the setlocale function.  */
#define HAVE_SETLOCALE 1

/* Define if you have the stpcpy function.  */
/* #undef HAVE_STPCPY */

/* Define if you have the strcasecmp function.  */
#define HAVE_STRCASECMP 1
#define strcasecmp _stricmp

/* Define if you have the strchr function.  */
#define HAVE_STRCHR 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the <argz.h> header file.  */
/* #undef HAVE_ARGZ_H */

/* Define if you have the <dirent.h> header file.  */
/* #undef HAVE_DIRENT_H */

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <locale.h> header file.  */
#define HAVE_LOCALE_H 1

/* Define if you have the <malloc.h> header file.  */
#define HAVE_MALLOC_H 1

/* Define if you have the <nl_types.h> header file.  */
/* #undef HAVE_NL_TYPES_H */

/* Define if you have the <pwd.h> header file.  */
/* #undef HAVE_PWD_H */

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <sys/param.h> header file.  */
/* #undef HAVE_SYS_PARAM_H */

/* Define if you have the <sys/time.h> header file.  */
/* #undef HAVE_SYS_TIME_H */

/* Define if you have the <unistd.h> header file.  */
/* #undef HAVE_UNISTD_H */

/* Define if you have the <wchar.h> header file.  */
#define HAVE_WCHAR_H 1

/* Define if you have the <wctype.h> header file.  */
#ifdef _MSC_VER
#define HAVE_WCTYPE_H 1
#endif /* _MSC_VER */

/* Define if you have the i library (-li).  */
/* #undef HAVE_LIBI */

/* Define if you have the intl library (-lintl).  */
/*#define HAVE_LIBINTL 1*/

/* define if compiled symbols have a leading underscore */
/* #undef WITH_SYMBOL_UNDERSCORE */

/* Define if you have the Wintab programmer's kit */
/* #define HAVE_WINTAB 1 */
#undef HAVE_WINTAB

/* Define if you have the <dimm.h> header file
 * (available in the Platform SDK)
*/
/* #define HAVE_DIMM_H 1 */
