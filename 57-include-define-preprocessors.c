#include <stdio.h>
// #include "55-three-loops.c" // c file include here
#define PI 3.14
#define RADIUS(r) r *r

int main()
{

#ifdef PI
    printf("aria of circle is %f\n", PI * RADIUS(2));
#endif
    return 0;
}
