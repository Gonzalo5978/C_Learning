#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Valor de INT_MAX = %i\n", INT_MAX);
    printf("Valor de INT_MIN = %i\n", INT_MIN);
    printf("Ocupa %i bytes\n", sizeof(int));

    printf("Valor de FLT_MAX = %f\n", FLT_MAX);
    printf("Valor de FLT_MIN = %f\n", FLT_MIN);
    printf("Ocupa %i bytes\n", sizeof(float));

    return 0;
}