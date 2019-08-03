#include <stdio.h>
void arrayRev(int arr[], int size)
{
    // for (int i = 4; i >= 0; i--)
    // {
    //     printf("%d\t", arr[i]);
    // }
    // printf("\n");
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
void arrayPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}
int main()
{
    int arr[100], size;
    printf("How many elements you want to enter: ");
    scanf("%d", &size);
    printf("Enter %d elements\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n\nBefore Swapping\n");
    arrayPrint(arr, size);
    arrayRev(arr, size);

    printf("\n\nAfter Swapping\n");
    arrayPrint(arr, size);
    printf("\n");
    return 0;
}
