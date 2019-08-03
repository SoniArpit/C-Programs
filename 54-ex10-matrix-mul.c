// fari thi logic samjavu
#include <stdio.h>

int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{3, 2}, {7, 0}};
    int sum = 0, i, j, k;
    int mul[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d]=%d ", i, j, a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a[%d][%d]=%d ", i, j, b[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }

            mul[i][j] = sum;
            sum = 0;
        }

        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
