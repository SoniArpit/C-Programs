#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("value at position %d is %d\n", i, array[i]);
    }
    array[0] = 343;

    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        // printf("value at position %d is %d\n", i, ptr[i]);
        printf("value at position %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 1) = 200;
    return 0;
}

int main()
{
    int arr[] = {2, 3, 4};
    // printf("Before %d\n", arr[0]);
    // func1(arr);
    // printf("Before %d\n", arr[0]);

    func2(arr);
    printf("Before %d\n", arr[0]);
    func2(arr);
    printf("After %d\n", arr[0]);

    return 0;
}
