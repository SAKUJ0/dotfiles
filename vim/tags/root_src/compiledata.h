/* This is file is automatically generated */
#define BUILD_ARCH "linuxx8664gcc"
#define BUILD_NODE "Linux panlong 3.2.0-37-generic #58-Ubuntu SMP Thu Jan 24 15:28:10 UTC 2013 x86_64 x86_64 x86_64 GNU/Linux" 
#define COMPILER "/usr/bin/g++" 
#define COMPILERVERS "gcc48"
#define MAKESHAREDLIB  "cd $BuildDir ; g++ -c $Opt -pipe -m64 -Wshadow -Wall -W -Woverloaded-virtual -fPIC -DR__HAVE_CONFIG -g -O2 -fstack-protector --param=ssp-buffer-size=4 -Wformat -Werror=format-security -D_FORTIFY_SOURCE=2 -pthread $IncludePath $SourceFiles ; g++ $ObjectFiles -shared -Wl,-soname,$LibName.so -m64 -O2 -Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,--no-undefined -Wl,--as-needed $LinkedLibs -o $SharedLib"
#define MAKEEXE "cd $BuildDir ; g++ -c  -pipe -m64 -Wshadow -Wall -W -Woverloaded-virtual -fPIC -DR__HAVE_CONFIG -g -O2 -fstack-protector --param=ssp-buffer-size=4 -Wformat -Werror=format-security -D_FORTIFY_SOURCE=2 -pthread $IncludePath $SourceFiles; g++ $ObjectFiles -m64 -O2 -Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,--no-undefined -Wl,--as-needed -o $ExeName $LinkedLibs -lm -ldl  -pthread   -rdynamic"
#define CXXOPT "-O2"
#define CXXDEBUG "-g"
#define ROOTBUILD ""
#define LINKEDLIBS "-L/usr/lib/x86_64-linux-gnu/root5.34 -lCore -lCint -lRint "
#define INCLUDEPATH "-I/usr/include/root"
#define OBJEXT "o" 
#define SOEXT "so" 
