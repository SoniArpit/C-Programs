/*
{1,2,3,4}

1++ = 2 = not unique

{2,5,14}

2++ = 

*/

#include <stdio.h>

int main()
{
    int arr[10] = {2, 2, 3, 4};
    int unique = 0, notUnique = 0;
    printf("%d\n", arr[0] + 1);

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] + 1 == arr[i + 1])
        {
            printf("not unique\n");
            notUnique++;
            printf("\t not unique %d\n", notUnique);
        }
        else
        {
            printf("unique\n");
            unique++;
            printf("\t unique %d\n", unique);
        }
    }

    if (unique > notUnique)
    {
        printf("\n\n Array is unique\n");
    }
    else if (unique < notUnique || unique == notUnique)
    {
        printf("\n\n Array is not unique\n");
    }
    return 0;
}
