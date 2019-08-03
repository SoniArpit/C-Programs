#include <stdio.h>

int main()
{
    int a = 35;
    int *ptr = &a;

    printf(" %d\n", ptr);
    ptr++;
    printf(" %d\n", ptr);
    ptr--;
    printf(" %d\n", ptr);

    return 0;
}
