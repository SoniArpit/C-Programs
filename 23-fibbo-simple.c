#include <stdio.h>

int main()
{
    int n, f0 = 0, f1 = 1, f2;
    printf("Enter number to generate fibbo: ");
    scanf("%d", &n);

    printf("%d\n", f0);
    for (int i = 0; i < n; i++)
    {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;

        printf("%d\n", f2);
    }

    return 0;
}
