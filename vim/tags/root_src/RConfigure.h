#ifndef ROOT_RConfigure
#define ROOT_RConfigure

/* Configurations file for linuxx8664gcc */
#ifdef R__HAVE_CONFIG
#define ROOTPREFIX    "/usr"
#define ROOTBINDIR    "/usr/bin"
#define ROOTLIBDIR    "/usr/lib/x86_64-linux-gnu/root5.34"
#define ROOTINCDIR    "/usr/include/root"
#define ROOTETCDIR    "/etc/root"
#define ROOTDATADIR   "/usr/share/root"
#define ROOTDOCDIR    "/usr/share/doc/root"
#define ROOTMACRODIR  "/usr/share/root/macros"
#define ROOTSRCDIR    "/usr/share/root/src"
#define ROOTICONPATH  "/usr/share/root/icons"
#define EXTRAICONPATH "/usr/share/pixmaps"
#define TTFFONTDIR    "/usr/share/root/fonts"
#define CINTINCDIR    "/usr/lib/x86_64-linux-gnu/root5.34"
#endif

#define R__HAS_SETRESUID   /**/
#define R__HAS_MATHMORE   /**/
#define R__HAS_PTHREAD    /**/
#define R__HAS_XFT    /**/
#undef R__HAS_CLING   /**/
#undef R__HAS_COCOA    /**/
#undef R__USE_CXX11    /**/

#endif
