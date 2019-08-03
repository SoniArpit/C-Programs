#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Value is %d\n", arr[i]);
    }

    printf("\n");

    printf("Enter new size: ");
    scanf("%d", &size);

    arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Value is %d\n", arr[i]);
    }

    return 0;
}
