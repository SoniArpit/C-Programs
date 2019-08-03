/* Functions for dynamic memory allocation
    - malloc - means memory allocation - memory are initializes to garbage value

    - calloc - contiguous allocation - memory are initializes to 0 

    - realloc - means reallocation - if dynamically allocated memory is insufficient we can change the size of previously allocated memory using realloc

    - free - free the allocated memory
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // // use of malloc
    // int *ptr, size;
    // ptr = (int *)malloc(size * sizeof(int));
    // printf("Enter size of the array: ");
    // scanf("%d", &size);

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Enter %d element: ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Value at %d is %d\n", i, ptr[i]);
    // }

    // return 0;

    // use of calloc
    int *ptr;
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    ptr = (int *)calloc(size, sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Value at %d is %d\n", i, ptr[i]);
    }

    // use of realloc

    printf("Enter size of the new array: ");
    scanf("%d", &size);

    ptr = (int *)realloc(ptr, size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Value at %d is %d\n", i, ptr[i]);
    }

    free(ptr);
    printf("\nAfter free\n");
    for (int i = 0; i < size; i++)
    {
        printf("Value at %d is %d\n", i, ptr[i]);
    }

        return 0;
}
