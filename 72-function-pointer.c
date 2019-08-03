#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("Sum is %d\n", sum(2, 3)); // testing

    int (*fPtr)(int, int);
    fPtr = &sum;
    int b = (*fPtr)(4, 5);
    printf("sum is with function pointer: %d\n", b);
    return 0;
}
