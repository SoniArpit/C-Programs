#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void helloUser(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("Sum is %d\n", fptr(3, 4));
}

void goodMorning(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("Sum is %d\n", fptr(5, 4));
}

void askNum(int (*fptr)(int, int))
{
    printf("Enter two number: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum is %d\n", fptr(a, b));
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    askNum(ptr);
    return 0;
}
