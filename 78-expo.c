#include <stdio.h>
#include <math.h>
int EXP(int, int);

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("%d^%d=%d", n1, n2, EXP(n1, n2));
    return 0;
}
int EXP(int n1, int n2)
{
    if (n2 % 2 != 0)
    {
        return pow(n1, EXP(n1, n2 - 1));
    }
    else
    {
        return 1;
    }
}