#include <stdio.h>

int main()
{
    int i, j, ch, size;

    printf("Press 1. to print Triangular Pattern\n");
    printf("Press 2. to print Reversed Triangular Pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter size for pattern: ");
    scanf("%d", &size);

    switch (ch)
    {
    case 1:
        for (i = 0; i < size + 1; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 2:
        for (i = size; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    default:
        break;
    }
    return 0;
}
