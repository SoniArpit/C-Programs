#include <stdio.h>
#include <stdlib.h>

int main()
{
    // use of malloc
    int *ptr, size, sum = 0;
    printf("Enter size : ");
    scanf("%d", &size);

    //ptr = (int *)malloc(size * sizeof(int));
    ptr = (int *)calloc(size, sizeof(int));

    printf("Enter elements\n");
    for (int i = 0; i < size; i++)
    {
        // printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
        sum += *(ptr + i);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Value at %d is %d\n", i, ptr[i]);
    // }
    printf("Sum=%d\n", sum);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {

//     // This pointer will hold the
//     // base address of the block created
//     int *ptr, *ptr1;
//     int n, i, sum = 0;

//     // Get the number of elements for the array
//     n = 5;
//     printf("Enter number of elements: %d\n", n);

//     // Dynamically allocate memory using malloc()
//     ptr = (int *)malloc(n * sizeof(int));

//     // Dynamically allocate memory using calloc()
//     ptr1 = (int *)calloc(n, sizeof(int));

// Check if the memory has been successfully
// allocated by malloc or not
// if (ptr == NULL || ptr1 == NULL) {
// 	printf("Memory not allocated.\n");
// 	exit(0);
// }

// Memory has been successfully allocated
//     printf("Memory successfully allocated using malloc.\n");

//     // Free the memory
//     free(ptr);
//     printf("Malloc Memory successfully freed.\n");

//     // Memory has been successfully allocated
//     printf("\nMemory successfully allocated using calloc.\n");

//     // Free the memory
//     free(ptr1);
//     printf("Calloc Memory successfully freed.\n");

//     return 0;
// }
