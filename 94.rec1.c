#include <stdio.h>
#include <stdlib.h>
void num(int n, int l)
{
    if (n == l + 1)
    {
        return;
    }
    printf("%d\n", n);
    num(n + 1, l);
}
int main()
{
    num(0, 10);
}
