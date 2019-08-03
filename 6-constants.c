#include <stdio.h>
#define PI 3.14

int main()
{
    const float b = 6.44;
    // b = 5.44; cannot be changed bcz of constant
    printf("%f\n", b);
    // PI = 55; cannot be changed bcz of constant #define
    printf("%f\n", PI);

    return 0;
}
