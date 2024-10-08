#ifndef _SPOT_MISC__CONFIG_H
#define _SPOT_MISC__CONFIG_H 1
 
/* spot/misc/_config.h. Generated automatically at end of configure. */
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Define to 1 if using 'alloca.c'. */
/* #undef C_ALLOCA */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#ifndef SPOT_DBL_EXPBIT0_BIT
#define SPOT_DBL_EXPBIT0_BIT 20
#endif

/* Define as the word index where to find the exponent of 'double'. */
#ifndef SPOT_DBL_EXPBIT0_WORD
#define SPOT_DBL_EXPBIT0_WORD 1
#endif

/* Define if you want debugging code. */
/* #undef DEBUG */

/* Define to 1 if // is a file system root distinct from /. */
/* #undef DOUBLE_SLASH_IS_DISTINCT_ROOT */

/* Whether Spot is compiled with -pthread. */
#ifndef SPOT_ENABLE_PTHREAD
#define SPOT_ENABLE_PTHREAD 1
#endif

/* Define to 1 if mkdir mistakenly creates a directory given with a trailing
   dot component. */
/* #undef FUNC_MKDIR_DOT_BUG */

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#ifndef SPOT_GETTIMEOFDAY_TIMEZONE
#define SPOT_GETTIMEOFDAY_TIMEZONE void
#endif

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module close-stream shall be considered present. */
#ifndef SPOT_GNULIB_CLOSE_STREAM
#define SPOT_GNULIB_CLOSE_STREAM 1
#endif

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#ifndef SPOT_GNULIB_FSCANF
#define SPOT_GNULIB_FSCANF 1
#endif

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#ifndef SPOT_GNULIB_MALLOC_GNU
#define SPOT_GNULIB_MALLOC_GNU 1
#endif

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module mkstemps shall be considered present. */
#ifndef SPOT_GNULIB_MKSTEMPS
#define SPOT_GNULIB_MKSTEMPS 1
#endif

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module msvc-nothrow shall be considered present. */
#ifndef SPOT_GNULIB_MSVC_NOTHROW
#define SPOT_GNULIB_MSVC_NOTHROW 1
#endif

/* Define to 1 if printf and friends should be labeled with attribute
   "__gnu_printf__" instead of "__printf__" */
/* #undef GNULIB_PRINTF_ATTRIBUTE_FLAVOR_GNU */

/* Define to 1 to add extern declaration of program_invocation_name to argp.h
   */
#ifndef SPOT_GNULIB_PROGRAM_INVOCATION_NAME
#define SPOT_GNULIB_PROGRAM_INVOCATION_NAME 1
#endif

/* Define to 1 to add extern declaration of program_invocation_short_name to
   argp.h */
#ifndef SPOT_GNULIB_PROGRAM_INVOCATION_SHORT_NAME
#define SPOT_GNULIB_PROGRAM_INVOCATION_SHORT_NAME 1
#endif

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#ifndef SPOT_GNULIB_SCANF
#define SPOT_GNULIB_SCANF 1
#endif

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror shall be considered present. */
#ifndef SPOT_GNULIB_STRERROR
#define SPOT_GNULIB_STRERROR 1
#endif

/* Define to 1 when the gnulib module environ should be tested. */
#ifndef SPOT_GNULIB_TEST_ENVIRON
#define SPOT_GNULIB_TEST_ENVIRON 1
#endif

/* Define to 1 when the gnulib module getopt-posix should be tested. */
#ifndef SPOT_GNULIB_TEST_GETOPT_POSIX
#define SPOT_GNULIB_TEST_GETOPT_POSIX 1
#endif

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#ifndef SPOT_GNULIB_TEST_GETTIMEOFDAY
#define SPOT_GNULIB_TEST_GETTIMEOFDAY 1
#endif

/* Define to 1 when the gnulib module isatty should be tested. */
#ifndef SPOT_GNULIB_TEST_ISATTY
#define SPOT_GNULIB_TEST_ISATTY 1
#endif

/* Define to 1 when the gnulib module lstat should be tested. */
#ifndef SPOT_GNULIB_TEST_LSTAT
#define SPOT_GNULIB_TEST_LSTAT 1
#endif

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#ifndef SPOT_GNULIB_TEST_MALLOC_POSIX
#define SPOT_GNULIB_TEST_MALLOC_POSIX 1
#endif

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#ifndef SPOT_GNULIB_TEST_MBRTOWC
#define SPOT_GNULIB_TEST_MBRTOWC 1
#endif

/* Define to 1 when the gnulib module mbsinit should be tested. */
#ifndef SPOT_GNULIB_TEST_MBSINIT
#define SPOT_GNULIB_TEST_MBSINIT 1
#endif

/* Define to 1 when the gnulib module memchr should be tested. */
#ifndef SPOT_GNULIB_TEST_MEMCHR
#define SPOT_GNULIB_TEST_MEMCHR 1
#endif

/* Define to 1 when the gnulib module mempcpy should be tested. */
#ifndef SPOT_GNULIB_TEST_MEMPCPY
#define SPOT_GNULIB_TEST_MEMPCPY 1
#endif

/* Define to 1 when the gnulib module mkstemp should be tested. */
#ifndef SPOT_GNULIB_TEST_MKSTEMP
#define SPOT_GNULIB_TEST_MKSTEMP 1
#endif

/* Define to 1 when the gnulib module mkstemps should be tested. */
#ifndef SPOT_GNULIB_TEST_MKSTEMPS
#define SPOT_GNULIB_TEST_MKSTEMPS 1
#endif

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#ifndef SPOT_GNULIB_TEST_RAWMEMCHR
#define SPOT_GNULIB_TEST_RAWMEMCHR 1
#endif

/* Define to 1 when the gnulib module secure_getenv should be tested. */
#ifndef SPOT_GNULIB_TEST_SECURE_GETENV
#define SPOT_GNULIB_TEST_SECURE_GETENV 1
#endif

/* Define to 1 when the gnulib module setlocale_null should be tested. */
#ifndef SPOT_GNULIB_TEST_SETLOCALE_NULL
#define SPOT_GNULIB_TEST_SETLOCALE_NULL 1
#endif

/* Define to 1 when the gnulib module sleep should be tested. */
#ifndef SPOT_GNULIB_TEST_SLEEP
#define SPOT_GNULIB_TEST_SLEEP 1
#endif

/* Define to 1 when the gnulib module stat should be tested. */
#ifndef SPOT_GNULIB_TEST_STAT
#define SPOT_GNULIB_TEST_STAT 1
#endif

/* Define to 1 when the gnulib module stpcpy should be tested. */
#ifndef SPOT_GNULIB_TEST_STPCPY
#define SPOT_GNULIB_TEST_STPCPY 1
#endif

/* Define to 1 when the gnulib module strchrnul should be tested. */
#ifndef SPOT_GNULIB_TEST_STRCHRNUL
#define SPOT_GNULIB_TEST_STRCHRNUL 1
#endif

/* Define to 1 when the gnulib module strerror should be tested. */
#ifndef SPOT_GNULIB_TEST_STRERROR
#define SPOT_GNULIB_TEST_STRERROR 1
#endif

/* Define to 1 when the gnulib module strndup should be tested. */
#ifndef SPOT_GNULIB_TEST_STRNDUP
#define SPOT_GNULIB_TEST_STRNDUP 1
#endif

/* Define to 1 when the gnulib module strnlen should be tested. */
#ifndef SPOT_GNULIB_TEST_STRNLEN
#define SPOT_GNULIB_TEST_STRNLEN 1
#endif

/* Define to 1 when the gnulib module strverscmp should be tested. */
#ifndef SPOT_GNULIB_TEST_STRVERSCMP
#define SPOT_GNULIB_TEST_STRVERSCMP 1
#endif

/* Define to 1 when the gnulib module vsnprintf should be tested. */
#ifndef SPOT_GNULIB_TEST_VSNPRINTF
#define SPOT_GNULIB_TEST_VSNPRINTF 1
#endif

/* Define to 1 if you have the `alarm' function. */
#ifndef SPOT_HAVE_ALARM
#define SPOT_HAVE_ALARM 1
#endif

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#ifndef SPOT_HAVE_ALLOCA
#define SPOT_HAVE_ALLOCA 1
#endif

/* Define to 1 if <alloca.h> works. */
#ifndef SPOT_HAVE_ALLOCA_H
#define SPOT_HAVE_ALLOCA_H 1
#endif

/* Define to 1 if you have the `argz_add' function. */
/* #undef HAVE_ARGZ_ADD */

/* Define to 1 if you have the `argz_append' function. */
/* #undef HAVE_ARGZ_APPEND */

/* Define to 1 if you have the `argz_count' function. */
/* #undef HAVE_ARGZ_COUNT */

/* Define to 1 if you have the `argz_create_sep' function. */
/* #undef HAVE_ARGZ_CREATE_SEP */

/* Define to 1 if you have the <argz.h> header file. */
/* #undef HAVE_ARGZ_H */

/* Define to 1 if you have the `argz_insert' function. */
/* #undef HAVE_ARGZ_INSERT */

/* Define to 1 if you have the `argz_next' function. */
/* #undef HAVE_ARGZ_NEXT */

/* Define to 1 if you have the `argz_stringify' function. */
/* #undef HAVE_ARGZ_STRINGIFY */

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the `closedir' function. */
#ifndef SPOT_HAVE_CLOSEDIR
#define SPOT_HAVE_CLOSEDIR 1
#endif

/* Define to 1 if you have the <crtdefs.h> header file. */
/* #undef HAVE_CRTDEFS_H */

/* Define to 1 if you have the declaration of `clearerr_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_CLEARERR_UNLOCKED
#define SPOT_HAVE_DECL_CLEARERR_UNLOCKED 1
#endif

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the declaration of `feof_unlocked', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_FEOF_UNLOCKED
#define SPOT_HAVE_DECL_FEOF_UNLOCKED 1
#endif

/* Define to 1 if you have the declaration of `ferror_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_FERROR_UNLOCKED
#define SPOT_HAVE_DECL_FERROR_UNLOCKED 1
#endif

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_FFLUSH_UNLOCKED
#define SPOT_HAVE_DECL_FFLUSH_UNLOCKED 0
#endif

/* Define to 1 if you have the declaration of `fgets_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_FGETS_UNLOCKED
#define SPOT_HAVE_DECL_FGETS_UNLOCKED 0
#endif

/* Define to 1 if you have the declaration of `fputc_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_FPUTC_UNLOCKED
#define SPOT_HAVE_DECL_FPUTC_UNLOCKED 0
#endif

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_FPUTS_UNLOCKED
#define SPOT_HAVE_DECL_FPUTS_UNLOCKED 0
#endif

/* Define to 1 if you have the declaration of `fread_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_FREAD_UNLOCKED
#define SPOT_HAVE_DECL_FREAD_UNLOCKED 0
#endif

/* Define to 1 if you have the declaration of `fwrite_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_FWRITE_UNLOCKED
#define SPOT_HAVE_DECL_FWRITE_UNLOCKED 0
#endif

/* Define to 1 if you have the declaration of `getchar_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_GETCHAR_UNLOCKED
#define SPOT_HAVE_DECL_GETCHAR_UNLOCKED 1
#endif

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_GETC_UNLOCKED
#define SPOT_HAVE_DECL_GETC_UNLOCKED 1
#endif

/* Define to 1 if you have the declaration of `mbrtowc', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBRTOWC */

/* Define to 1 if you have the declaration of `mbsinit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSINIT */

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#ifndef SPOT_HAVE_DECL_PROGRAM_INVOCATION_NAME
#define SPOT_HAVE_DECL_PROGRAM_INVOCATION_NAME 0
#endif

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#ifndef SPOT_HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME
#define SPOT_HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 0
#endif

/* Define to 1 if you have the declaration of `putchar_unlocked', and to 0 if
   you don't. */
#ifndef SPOT_HAVE_DECL_PUTCHAR_UNLOCKED
#define SPOT_HAVE_DECL_PUTCHAR_UNLOCKED 1
#endif

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_PUTC_UNLOCKED
#define SPOT_HAVE_DECL_PUTC_UNLOCKED 1
#endif

/* Define to 1 if you have the declaration of `sleep', and to 0 if you don't.
   */
#ifndef SPOT_HAVE_DECL_SLEEP
#define SPOT_HAVE_DECL_SLEEP 1
#endif

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_STRERROR_R
#define SPOT_HAVE_DECL_STRERROR_R 1
#endif

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_STRNCASECMP
#define SPOT_HAVE_DECL_STRNCASECMP 1
#endif

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_STRNDUP
#define SPOT_HAVE_DECL_STRNDUP 1
#endif

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_STRNLEN
#define SPOT_HAVE_DECL_STRNLEN 1
#endif

/* Define to 1 if you have the declaration of `towlower', and to 0 if you
   don't. */
/* #undef HAVE_DECL_TOWLOWER */

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL_VSNPRINTF
#define SPOT_HAVE_DECL_VSNPRINTF 1
#endif

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#ifndef SPOT_HAVE_DECL__SNPRINTF
#define SPOT_HAVE_DECL__SNPRINTF 0
#endif

/* Define to 1 if you have the declaration of `__argv', and to 0 if you don't.
   */
#ifndef SPOT_HAVE_DECL___ARGV
#define SPOT_HAVE_DECL___ARGV 0
#endif

/* Define to 1 if you have the declaration of `__fpending', and to 0 if you
   don't. */
/* #undef HAVE_DECL___FPENDING */

/* Define to 1 if you have the <dirent.h> header file. */
#ifndef SPOT_HAVE_DIRENT_H
#define SPOT_HAVE_DIRENT_H 1
#endif

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
#ifndef SPOT_HAVE_DLERROR
#define SPOT_HAVE_DLERROR 1
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef SPOT_HAVE_DLFCN_H
#define SPOT_HAVE_DLFCN_H 1
#endif

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define if you have the declaration of environ. */
/* #undef HAVE_ENVIRON_DECL */

/* Define to 1 if the system has the type `error_t'. */
/* #undef HAVE_ERROR_T */

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define to 1 if you have the `flockfile' function. */
#ifndef SPOT_HAVE_FLOCKFILE
#define SPOT_HAVE_FLOCKFILE 1
#endif

/* Define to 1 if you have the `funlockfile' function. */
#ifndef SPOT_HAVE_FUNLOCKFILE
#define SPOT_HAVE_FUNLOCKFILE 1
#endif

/* Define to 1 if you have the `getegid' function. */
#ifndef SPOT_HAVE_GETEGID
#define SPOT_HAVE_GETEGID 1
#endif

/* Define to 1 if you have the `geteuid' function. */
#ifndef SPOT_HAVE_GETEUID
#define SPOT_HAVE_GETEUID 1
#endif

/* Define to 1 if you have the `getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the `getgid' function. */
#ifndef SPOT_HAVE_GETGID
#define SPOT_HAVE_GETGID 1
#endif

/* Define to 1 if you have the <getopt.h> header file. */
#ifndef SPOT_HAVE_GETOPT_H
#define SPOT_HAVE_GETOPT_H 1
#endif

/* Define to 1 if you have the `getopt_long_only' function. */
#ifndef SPOT_HAVE_GETOPT_LONG_ONLY
#define SPOT_HAVE_GETOPT_LONG_ONLY 1
#endif

/* Define to 1 if you have the `getprogname' function. */
#ifndef SPOT_HAVE_GETPROGNAME
#define SPOT_HAVE_GETPROGNAME 1
#endif

/* Define to 1 if you have the `gettimeofday' function. */
#ifndef SPOT_HAVE_GETTIMEOFDAY
#define SPOT_HAVE_GETTIMEOFDAY 1
#endif

/* Define to 1 if you have the `getuid' function. */
#ifndef SPOT_HAVE_GETUID
#define SPOT_HAVE_GETUID 1
#endif

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#ifndef SPOT_HAVE_INTMAX_T
#define SPOT_HAVE_INTMAX_T 1
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef SPOT_HAVE_INTTYPES_H
#define SPOT_HAVE_INTTYPES_H 1
#endif

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#ifndef SPOT_HAVE_INTTYPES_H_WITH_UINTMAX
#define SPOT_HAVE_INTTYPES_H_WITH_UINTMAX 1
#endif

/* Define to 1 if you have the `issetugid' function. */
#ifndef SPOT_HAVE_ISSETUGID
#define SPOT_HAVE_ISSETUGID 1
#endif

/* Define to 1 if you have the `iswcntrl' function. */
#ifndef SPOT_HAVE_ISWCNTRL
#define SPOT_HAVE_ISWCNTRL 1
#endif

/* Define to 1 if you have the `kill' function. */
#ifndef SPOT_HAVE_KILL
#define SPOT_HAVE_KILL 1
#endif

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#ifndef SPOT_HAVE_LANGINFO_CODESET
#define SPOT_HAVE_LANGINFO_CODESET 1
#endif

/* Define if you have the libdl library or equivalent. */
#ifndef SPOT_HAVE_LIBDL
#define SPOT_HAVE_LIBDL 1
#endif

/* Define if libdlloader will be built on this platform */
#ifndef SPOT_HAVE_LIBDLLOADER
#define SPOT_HAVE_LIBDLLOADER 1
#endif

/* Define to 1 if you have the <limits.h> header file. */
#ifndef SPOT_HAVE_LIMITS_H
#define SPOT_HAVE_LIMITS_H 1
#endif

/* Define to 1 if you have the <linewrap.h> header file. */
/* #undef HAVE_LINEWRAP_H */

/* Define to 1 if the system has the type 'long long int'. */
#ifndef SPOT_HAVE_LONG_LONG_INT
#define SPOT_HAVE_LONG_LONG_INT 1
#endif

/* Define to 1 if you have the `lstat' function. */
#ifndef SPOT_HAVE_LSTAT
#define SPOT_HAVE_LSTAT 1
#endif

/* Define this if a modern libltdl is already installed */
/* #undef HAVE_LTDL */

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#ifndef SPOT_HAVE_MACH_O_DYLD_H
#define SPOT_HAVE_MACH_O_DYLD_H 1
#endif

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#ifndef SPOT_HAVE_MALLOC_GNU
#define SPOT_HAVE_MALLOC_GNU 1
#endif

/* Define if the 'malloc' function is POSIX compliant. */
#ifndef SPOT_HAVE_MALLOC_POSIX
#define SPOT_HAVE_MALLOC_POSIX 1
#endif

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#ifndef SPOT_HAVE_MAP_ANONYMOUS
#define SPOT_HAVE_MAP_ANONYMOUS 1
#endif

/* Define to 1 if you have the `mbrtowc' function. */
#ifndef SPOT_HAVE_MBRTOWC
#define SPOT_HAVE_MBRTOWC 1
#endif

/* Define to 1 if you have the `mbsinit' function. */
#ifndef SPOT_HAVE_MBSINIT
#define SPOT_HAVE_MBSINIT 1
#endif

/* Define to 1 if <wchar.h> declares mbstate_t. */
#ifndef SPOT_HAVE_MBSTATE_T
#define SPOT_HAVE_MBSTATE_T 1
#endif

/* Define to 1 if you have the `mempcpy' function. */
/* #undef HAVE_MEMPCPY */

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if <limits.h> defines the MIN and MAX macros. */
/* #undef HAVE_MINMAX_IN_LIMITS_H */

/* Define to 1 if <sys/param.h> defines the MIN and MAX macros. */
#ifndef SPOT_HAVE_MINMAX_IN_SYS_PARAM_H
#define SPOT_HAVE_MINMAX_IN_SYS_PARAM_H 1
#endif

/* Define to 1 if you have the `mkstemp' function. */
#ifndef SPOT_HAVE_MKSTEMP
#define SPOT_HAVE_MKSTEMP 1
#endif

/* Define to 1 if you have the `mkstemps' function. */
#ifndef SPOT_HAVE_MKSTEMPS
#define SPOT_HAVE_MKSTEMPS 1
#endif

/* Define to 1 if you have the `mprotect' function. */
#ifndef SPOT_HAVE_MPROTECT
#define SPOT_HAVE_MPROTECT 1
#endif

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
/* #undef HAVE_MSVC_INVALID_PARAMETER_HANDLER */

/* Define to 1 if you have the `opendir' function. */
#ifndef SPOT_HAVE_OPENDIR
#define SPOT_HAVE_OPENDIR 1
#endif

/* Define if libtool can extract symbol lists from object files. */
#ifndef SPOT_HAVE_PRELOADED_SYMBOLS
#define SPOT_HAVE_PRELOADED_SYMBOLS 1
#endif

/* Define if program_invocation_name is defined */
/* #undef HAVE_PROGRAM_INVOCATION_NAME */

/* Define if program_invocation_short_name is defined */
/* #undef HAVE_PROGRAM_INVOCATION_SHORT_NAME */

/* Define if you have the <pthread.h> header and the POSIX threads API. */
#ifndef SPOT_HAVE_PTHREAD_API
#define SPOT_HAVE_PTHREAD_API 1
#endif

/* Define to 1 if you have the `pthread_setaffinity_np' function. */
/* #undef HAVE_PTHREAD_SETAFFINITY_NP */

/* Define to 1 if you have the <Python.h> header file. */
/* #undef HAVE_PYTHON_H */

/* Define to 1 if you have the `rawmemchr' function. */
/* #undef HAVE_RAWMEMCHR */

/* Define to 1 if you have the `readdir' function. */
#ifndef SPOT_HAVE_READDIR
#define SPOT_HAVE_READDIR 1
#endif

/* Define to 1 if you have the `sched_getcpu' function. */
/* #undef HAVE_SCHED_GETCPU */

/* Define to 1 if you have the `secure_getenv' function. */
/* #undef HAVE_SECURE_GETENV */

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define to 1 if you have the `sigaction' function. */
#ifndef SPOT_HAVE_SIGACTION
#define SPOT_HAVE_SIGACTION 1
#endif

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if you have the `sleep' function. */
#ifndef SPOT_HAVE_SLEEP
#define SPOT_HAVE_SLEEP 1
#endif

/* Define to 1 if you have the `snprintf' function. */
#ifndef SPOT_HAVE_SNPRINTF
#define SPOT_HAVE_SNPRINTF 1
#endif

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#ifndef SPOT_HAVE_SNPRINTF_RETVAL_C99
#define SPOT_HAVE_SNPRINTF_RETVAL_C99 1
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef SPOT_HAVE_STDINT_H
#define SPOT_HAVE_STDINT_H 1
#endif

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#ifndef SPOT_HAVE_STDINT_H_WITH_UINTMAX
#define SPOT_HAVE_STDINT_H_WITH_UINTMAX 1
#endif

/* Define to 1 if you have the <stdio_ext.h> header file. */
/* #undef HAVE_STDIO_EXT_H */

/* Define to 1 if you have the <stdio.h> header file. */
#ifndef SPOT_HAVE_STDIO_H
#define SPOT_HAVE_STDIO_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef SPOT_HAVE_STDLIB_H
#define SPOT_HAVE_STDLIB_H 1
#endif

/* Define to 1 if you have the `stpcpy' function. */
#ifndef SPOT_HAVE_STPCPY
#define SPOT_HAVE_STPCPY 1
#endif

/* Define to 1 if you have the `strcasecmp' function. */
#ifndef SPOT_HAVE_STRCASECMP
#define SPOT_HAVE_STRCASECMP 1
#endif

/* Define to 1 if you have the `strchrnul' function. */
/* #undef HAVE_STRCHRNUL */

/* Define if you have `strerror_r'. */
#ifndef SPOT_HAVE_STRERROR_R
#define SPOT_HAVE_STRERROR_R 1
#endif

/* Define to 1 if you have the <strings.h> header file. */
#ifndef SPOT_HAVE_STRINGS_H
#define SPOT_HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef SPOT_HAVE_STRING_H
#define SPOT_HAVE_STRING_H 1
#endif

/* Define to 1 if you have the `strlcat' function. */
#ifndef SPOT_HAVE_STRLCAT
#define SPOT_HAVE_STRLCAT 1
#endif

/* Define to 1 if you have the `strlcpy' function. */
#ifndef SPOT_HAVE_STRLCPY
#define SPOT_HAVE_STRLCPY 1
#endif

/* Define to 1 if you have the `strncasecmp' function. */
#ifndef SPOT_HAVE_STRNCASECMP
#define SPOT_HAVE_STRNCASECMP 1
#endif

/* Define to 1 if you have the `strndup' function. */
#ifndef SPOT_HAVE_STRNDUP
#define SPOT_HAVE_STRNDUP 1
#endif

/* Define to 1 if you have the `strnlen' function. */
#ifndef SPOT_HAVE_STRNLEN
#define SPOT_HAVE_STRNLEN 1
#endif

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atimespec.tv_nsec' is a member of `struct stat'. */
#ifndef SPOT_HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC
#define SPOT_HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC 1
#endif

/* Define to 1 if `st_atim.st__tim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC */

/* Define to 1 if `st_atim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC */

/* Define to 1 if `st_birthtimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */

/* Define to 1 if `st_birthtimespec.tv_nsec' is a member of `struct stat'. */
#ifndef SPOT_HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC
#define SPOT_HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC 1
#endif

/* Define to 1 if `st_birthtim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */

/* Define to 1 if you have the `strverscmp' function. */
/* #undef HAVE_STRVERSCMP */

/* Define to 1 if you have the `symlink' function. */
#ifndef SPOT_HAVE_SYMLINK
#define SPOT_HAVE_SYMLINK 1
#endif

/* Define to 1 if you have the <sysexits.h> header file. */
#ifndef SPOT_HAVE_SYSEXITS_H
#define SPOT_HAVE_SYSEXITS_H 1
#endif

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#ifndef SPOT_HAVE_SYS_MMAN_H
#define SPOT_HAVE_SYS_MMAN_H 1
#endif

/* Define to 1 if you have the <sys/param.h> header file. */
#ifndef SPOT_HAVE_SYS_PARAM_H
#define SPOT_HAVE_SYS_PARAM_H 1
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#ifndef SPOT_HAVE_SYS_SOCKET_H
#define SPOT_HAVE_SYS_SOCKET_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef SPOT_HAVE_SYS_STAT_H
#define SPOT_HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef SPOT_HAVE_SYS_TIME_H
#define SPOT_HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef SPOT_HAVE_SYS_TYPES_H
#define SPOT_HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <sys/wait.h> header file. */
#ifndef SPOT_HAVE_SYS_WAIT_H
#define SPOT_HAVE_SYS_WAIT_H 1
#endif

/* Define to 1 if you have the <threads.h> header file. */
/* #undef HAVE_THREADS_H */

/* Define to 1 if you have the `times' function. */
#ifndef SPOT_HAVE_TIMES
#define SPOT_HAVE_TIMES 1
#endif

/* Define to 1 if you have the `towlower' function. */
#ifndef SPOT_HAVE_TOWLOWER
#define SPOT_HAVE_TOWLOWER 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef SPOT_HAVE_UNISTD_H
#define SPOT_HAVE_UNISTD_H 1
#endif

/* Define to 1 if the system has the type 'unsigned long long int'. */
#ifndef SPOT_HAVE_UNSIGNED_LONG_LONG_INT
#define SPOT_HAVE_UNSIGNED_LONG_LONG_INT 1
#endif

/* Define if you have a global __progname variable */
#ifndef SPOT_HAVE_VAR___PROGNAME
#define SPOT_HAVE_VAR___PROGNAME 1
#endif

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#ifndef SPOT_HAVE_VISIBILITY
#define SPOT_HAVE_VISIBILITY 1
#endif

/* Define to 1 if you have the `vsnprintf' function. */
#ifndef SPOT_HAVE_VSNPRINTF
#define SPOT_HAVE_VSNPRINTF 1
#endif

/* Define to 1 if you have the <wchar.h> header file. */
#ifndef SPOT_HAVE_WCHAR_H
#define SPOT_HAVE_WCHAR_H 1
#endif

/* Define if you have the 'wchar_t' type. */
#ifndef SPOT_HAVE_WCHAR_T
#define SPOT_HAVE_WCHAR_T 1
#endif

/* Define to 1 if you have the `wcrtomb' function. */
#ifndef SPOT_HAVE_WCRTOMB
#define SPOT_HAVE_WCRTOMB 1
#endif

/* Define to 1 if you have the `wcslen' function. */
#ifndef SPOT_HAVE_WCSLEN
#define SPOT_HAVE_WCSLEN 1
#endif

/* Define to 1 if you have the `wcsnlen' function. */
#ifndef SPOT_HAVE_WCSNLEN
#define SPOT_HAVE_WCSNLEN 1
#endif

/* Define to 1 if you have the <wctype.h> header file. */
#ifndef SPOT_HAVE_WCTYPE_H
#define SPOT_HAVE_WCTYPE_H 1
#endif

/* Define to 1 if the compiler and linker support weak declarations of
   symbols. */
/* #undef HAVE_WEAK_SYMBOLS */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#ifndef SPOT_HAVE_WINT_T
#define SPOT_HAVE_WINT_T 1
#endif

/* This value is set to 1 to indicate that the system argz facility works */
/* #undef HAVE_WORKING_ARGZ */

/* Define to 1 if O_NOATIME works. */
#ifndef SPOT_HAVE_WORKING_O_NOATIME
#define SPOT_HAVE_WORKING_O_NOATIME 1
#endif

/* Define to 1 if O_NOFOLLOW works. */
#ifndef SPOT_HAVE_WORKING_O_NOFOLLOW
#define SPOT_HAVE_WORKING_O_NOFOLLOW 1
#endif

/* Define to 1 if you have the <xlocale.h> header file. */
#ifndef SPOT_HAVE_XLOCALE_H
#define SPOT_HAVE_XLOCALE_H 1
#endif

/* Define to 1 if the system has the type `_Bool'. */
#ifndef SPOT_HAVE__BOOL
#define SPOT_HAVE__BOOL 1
#endif

/* Define to 1 if you have the `_set_invalid_parameter_handler' function. */
/* #undef HAVE__SET_INVALID_PARAMETER_HANDLER */

/* Define to 1 if the compiler supports the keyword '__inline'. */
#ifndef SPOT_HAVE___INLINE
#define SPOT_HAVE___INLINE 1
#endif

/* Define to 1 if you have the `__secure_getenv' function. */
/* #undef HAVE___SECURE_GETENV */

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
#ifndef SPOT_LT_DLSEARCH_PATH
#define SPOT_LT_DLSEARCH_PATH "/usr/local/lib:/lib:/usr/lib"
#endif

/* The archive extension */
#ifndef SPOT_LT_LIBEXT
#define SPOT_LT_LIBEXT "a"
#endif

/* The archive prefix */
#ifndef SPOT_LT_LIBPREFIX
#define SPOT_LT_LIBPREFIX "lib"
#endif

/* Define to the extension used for runtime loadable modules, say, ".so". */
#ifndef SPOT_LT_MODULE_EXT
#define SPOT_LT_MODULE_EXT ".so"
#endif

/* Define to the name of the environment variable that determines the run-time
   module search path. */
#ifndef SPOT_LT_MODULE_PATH_VAR
#define SPOT_LT_MODULE_PATH_VAR "DYLD_LIBRARY_PATH"
#endif

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#ifndef SPOT_LT_OBJDIR
#define SPOT_LT_OBJDIR ".libs/"
#endif

/* Define to the shared library suffix, say, ".dylib". */
#ifndef SPOT_LT_SHARED_EXT
#define SPOT_LT_SHARED_EXT ".dylib"
#endif

/* Define to the shared archive member specification, say "(shr.o)". */
/* #undef LT_SHARED_LIB_MEMBER */

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#ifndef SPOT_MALLOC_0_IS_NONNULL
#define SPOT_MALLOC_0_IS_NONNULL 1
#endif

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* The maximal number of acceptance sets supported (also known as acceptance
   marks) */
#ifndef SPOT_MAX_ACCSETS
#define SPOT_MAX_ACCSETS 32
#endif

/* Define if the mbrtowc function does not return (size_t) -2 for empty input.
   */
/* #undef MBRTOWC_EMPTY_INPUT_BUG */

/* Define if the mbrtowc function may signal encoding errors in the C locale.
   */
/* #undef MBRTOWC_IN_C_LOCALE_MAYBE_EILSEQ */

/* Define if the mbrtowc function has the NULL pwc argument bug. */
/* #undef MBRTOWC_NULL_ARG1_BUG */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG2_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
/* #undef MBRTOWC_RETVAL_BUG */

/* Define if the mbrtowc function stores a wide character when reporting
   incomplete input. */
/* #undef MBRTOWC_STORES_INCOMPLETE_BUG */

/* Use GNU style printf and scanf.  */
#ifndef __USE_MINGW_ANSI_STDIO
# define __USE_MINGW_ANSI_STDIO 1
#endif


/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Name of package */
#ifndef SPOT_PACKAGE
#define SPOT_PACKAGE "spot"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef SPOT_PACKAGE_BUGREPORT
#define SPOT_PACKAGE_BUGREPORT "spot@lrde.epita.fr"
#endif

/* Define to the full name of this package. */
#ifndef SPOT_PACKAGE_NAME
#define SPOT_PACKAGE_NAME "spot"
#endif

/* Define to the full name and version of this package. */
#ifndef SPOT_PACKAGE_STRING
#define SPOT_PACKAGE_STRING "spot 2.12"
#endif

/* Define to the one symbol short name of this package. */
#ifndef SPOT_PACKAGE_TARNAME
#define SPOT_PACKAGE_TARNAME "spot"
#endif

/* Define to the home page for this package. */
#ifndef SPOT_PACKAGE_URL
#define SPOT_PACKAGE_URL ""
#endif

/* Define to the version of this package. */
#ifndef SPOT_PACKAGE_VERSION
#define SPOT_PACKAGE_VERSION "2.12"
#endif

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
#ifndef SPOT_REPLACE_FUNC_STAT_FILE
#define SPOT_REPLACE_FUNC_STAT_FILE 1
#endif

/* Define to 1 if strerror(0) does not return a message implying success. */
#ifndef SPOT_REPLACE_STRERROR_0
#define SPOT_REPLACE_STRERROR_0 1
#endif

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define to 1 if setlocale (LC_ALL, NULL) is multithread-safe. */
#ifndef SPOT_SETLOCALE_NULL_ALL_MTSAFE
#define SPOT_SETLOCALE_NULL_ALL_MTSAFE 0
#endif

/* Define to 1 if setlocale (category, NULL) is multithread-safe. */
#ifndef SPOT_SETLOCALE_NULL_ONE_MTSAFE
#define SPOT_SETLOCALE_NULL_ONE_MTSAFE 1
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#ifndef SPOT_STDC_HEADERS
#define SPOT_STDC_HEADERS 1
#endif

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
/* #undef TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#ifndef SPOT_VERSION
#define SPOT_VERSION "2.12"
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#ifndef SPOT_YYTEXT_POINTER
#define SPOT_YYTEXT_POINTER 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to enable the declarations of ISO C 11 types and functions. */
/* #undef _ISOC11_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 on Solaris. */
/* #undef _LCONV_C99 */

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)) \
      && 0)
    /* [[noreturn]] is not practically usable, because with it the syntax
         extern _Noreturn void func (...);
       would not be valid; such a declaration would only be valid with 'extern'
       and '_Noreturn' swapped, or without the 'extern' keyword.  However, some
       AIX system header files and several gnulib header files use precisely
       this syntax with 'extern'.  */
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0)  \
            || 4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
            || (defined __apple_build_version__ \
                ? 6000000 <= __apple_build_version__ \
                : 3 < __clang_major__ + (5 <= __clang_minor__))))
   /* _Noreturn works as-is.  */
# elif 2 < __GNUC__ + (8 <= __GNUC_MINOR__) || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* For standard stat data types on VMS. */
#ifndef SPOT__USE_STD_STAT
#define SPOT__USE_STD_STAT 1
#endif

/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#ifndef SPOT___GETOPT_PREFIX
#define SPOT___GETOPT_PREFIX rpl_
#endif

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_CONSTANT_MACROS */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_LIMIT_MACROS */

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
#ifndef SPOT___error_t_defined
#define SPOT___error_t_defined 1
#endif

/* The _GL_ASYNC_SAFE marker should be attached to functions that are
   signal handlers (for signals other than SIGABRT, SIGPIPE) or can be
   invoked from such signal handlers.  Such functions have some restrictions:
     * All functions that it calls should be marked _GL_ASYNC_SAFE as well,
       or should be listed as async-signal-safe in POSIX
       <https://pubs.opengroup.org/onlinepubs/9699919799/functions/V2_chap02.html#tag_15_04>
       section 2.4.3.  Note that malloc(), sprintf(), and fwrite(), in
       particular, are NOT async-signal-safe.
     * All memory locations (variables and struct fields) that these functions
       access must be marked 'volatile'.  This holds for both read and write
       accesses.  Otherwise the compiler might optimize away stores to and
       reads from such locations that occur in the program, depending on its
       data flow analysis.  For example, when the program contains a loop
       that is intended to inspect a variable set from within a signal handler
           while (!signal_occurred)
             ;
       the compiler is allowed to transform this into an endless loop if the
       variable 'signal_occurred' is not declared 'volatile'.
   Additionally, recall that:
     * A signal handler should not modify errno (except if it is a handler
       for a fatal signal and ends by raising the same signal again, thus
       provoking the termination of the process).  If it invokes a function
       that may clobber errno, it needs to save and restore the value of
       errno.  */
#ifndef SPOT__GL_ASYNC_SAFE
#define SPOT__GL_ASYNC_SAFE
#endif


/* Define to a type to use for 'error_t' if it is not otherwise available. */
#ifndef _spot_error_t
#define _spot_error_t int
#endif

/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <https://lists.gnu.org/r/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions (ISO C 99 section 6.7.4.(3).
   This bug is known to occur on:

     OS X 10.8 and earlier; see:
     https://lists.gnu.org/r/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/clang-master-potential/20141111_102002/logs/ah-tty-0.3.12.log

     FreeBSD; see:
     https://lists.gnu.org/r/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <https://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.

   GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  It defines a macro
   __GNUC_STDC_INLINE__ to indicate this situation or a macro
   __GNUC_GNU_INLINE__ to indicate the opposite situation.
   GCC 4.2 with -std=c99 or -std=gnu99 implements the GNU C inline
   semantics but warns, unless -fgnu89-inline is used:
     warning: C99 inline functions are not supported; using GNU89
     warning: to disable this warning use -fgnu89-inline or the gnu_inline function attribute
   It defines a macro __GNUC_GNU_INLINE__ to indicate this situation.
 */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined __header_inline \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !defined __PGI \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

/* In GCC 4.6 (inclusive) to 5.1 (exclusive),
   suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if __GNUC__ == 4 && 6 <= __GNUC_MINOR__
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define as a signed integer type capable of holding a process identifier. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#ifndef _spot_restrict
#define _spot_restrict __restrict
#endif
/* Work around a bug in older versions of Sun C++, which did not
   #define __restrict__ or support _Restrict or __restrict__
   even though the corresponding Sun C compiler ended up with
   "#define restrict _Restrict" or "#define restrict __restrict__"
   in the previous line.  This workaround can be removed once
   we assume Oracle Developer Studio 12.5 (2016) or later.  */
#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#ifndef SPOT__UNUSED_PARAMETER_
#define SPOT__UNUSED_PARAMETER_ _GL_UNUSED
#endif

/* gcc supports the "unused" attribute on possibly unused labels, and
   g++ has since version 4.5.  Note to support C++ as well as C,
   _GL_UNUSED_LABEL should be used with a trailing ;  */
#if !defined __cplusplus || __GNUC__ > 4 \
    || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
# define _GL_UNUSED_LABEL _GL_UNUSED
#else
# define _GL_UNUSED_LABEL
#endif

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif

/* The __malloc__ attribute was added in gcc 3.  */
#if 3 <= __GNUC__
# define _GL_ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#else
# define _GL_ATTRIBUTE_MALLOC /* empty */
#endif

 
/* once: _SPOT_MISC__CONFIG_H */
#endif
