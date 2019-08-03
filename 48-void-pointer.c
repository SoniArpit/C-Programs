#include <stdio.h>

int main()
{
    void *ptr;
    int a = 10;
    float b = 20.44;

    ptr = &a;
    printf("Value of a is %d\n", (*(int *)ptr));

    ptr = &b;
    printf("Value of a is %f\n", (*(float *)ptr));
    return 0;
}
