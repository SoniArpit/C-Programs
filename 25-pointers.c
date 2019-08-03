#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    printf("value of a is %d\n", a);
    printf("address of a is using pointer %p\n", ptr);
    printf("value of a is using pointer %d\n", *ptr);
    printf("address of pointer is %p\n", &ptr);
    return 0;
}
