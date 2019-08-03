#include <stdio.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
        // return (factorial(number - 1) + factorial(number - 2));
    }
}

int main()
{
    int num;
    printf("Enter number to find factorial: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
