#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double型の最大値:%g\n", DBL_MAX);
    printf("double型の最小値:%g\n", DBL_MIN);
    printf("double型の精度:%d\n", DBL_DIG);
    printf("int型の最大値:%d\n", INT_MAX);
    printf("int型の最小値:%d\n", INT_MIN);
    printf("float型の最大値:%d\n", FLT_MAX);
    printf("float型の最小値:%d\n", FLT_MIN);
    printf("char型の最大値:%d\n", CHAR_MAX);
    printf("char型の最小値:%d\n", CHAR_MIN);
    printf("float型の精度:%d\n", FLT_DIG);
    printf("lomg double型の最大値:%d\n", LDBL_MAX);
    printf("long double型の最小値:%d\n", LDBL_MIN);
    printf("ing double型の精度:%d\n", LDBL_DIG);

    return 0;
}