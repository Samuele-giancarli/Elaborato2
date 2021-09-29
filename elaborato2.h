#include <math.h>
/*
 * f(x) = ax^2 + bx + c
 * */
#define NUM_OF_ROOTS(double a, double b,double c)\
{\
    int radice;\
    double Delta = pow(b, 2)-(4*a*c);\
    (Delta < 0) ? radice=0 : ((Delta==0) ? radice = 1 : radice = 2);\
    return radice;\
}

#define ROOT1(double a, double b, double c){ \
                                             \
}