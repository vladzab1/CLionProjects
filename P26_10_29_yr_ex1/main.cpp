#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define  Pi 3.14

#define f(n) for(int i = 0; i < n; i++)
#undef Pi

#ifdef Pi
int main() {
    /*
     include <> ""
     define
     undef
     if
     ifdef
     else
     elif
     endif
     warning
     error
     line
     pragma
    */

    // std::cout << "Pi = " << Pi << std::endl;
    // #undef Pi
    // double Pi = 3.1415;

    // f(5) std::cout << "Pi = " << Pi << std::endl;
    // std::cout << std::endl;
    // f(3) std::cout << "Pi = " << Pi << std::endl;
}
#else
int main() {
    #warning Pi is not definding
#line 123
#error Pi is not definding
}

#endif
