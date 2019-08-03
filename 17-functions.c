#include <stdio.h>

// with arguments with return type
int sum(int a, int b);

// with argument no return type
void printstar(int n);

// without argument with return type
int printnum();

// without arguments and without return type
void printSquare();

int main()
{
    int a = 10, b = 20, c, num;
    c = sum(a, b);
    printf("Sum is %d\n", c);

    // printstar(5);

    // num=printnum();
    // printf("%d\n", num);
    printSquare();
    printSquare();
    printSquare();
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*\n");
    }
}

int printnum()
{
    int num;
    printf("Enter number: ");
    scanf("%d\n", &num);

    return num;
}

void printSquare()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}