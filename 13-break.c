// in nested loop break bahar fenke ga ek loop se
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j == 1)
            {
                break;
            }
            printf("*");
        }
        printf("%d\n", i);
    }

    return 0;
}
