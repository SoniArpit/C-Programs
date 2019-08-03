#include <stdio.h>
int GCD(int, int);
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    printf("GCD: %d\n", GCD(a, b));
    printf("LCM: %d\n", (a * b) / GCD(a, b));

    return 0;
}

int GCD(int no1, int no2)
{
    if (no1 % no2 == 0)
    {
        return no2;
    }
    else
    {
        return GCD(no2, no1 % no2);
    }
}
