#include <stdio.h>

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("[%d][%d][%d]\n", i, j, k);
                /* code */
            }
        }
        printf("\n");
    }

    return 0;
}
