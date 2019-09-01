#include <stdio.h>
void swap(int, int);
int main()
{
    int n1 = 5, n2 = 10;
    printf("Before swapping n1=%d and n2=%d\n", n1, n2);
    swap(n1, n2);
    printf("After swapping n1=%d and n2=%d\n", n1, n2);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function swapping: n1=%d and n2=%d\n", a, b);
}