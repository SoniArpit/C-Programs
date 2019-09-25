//bubble sort
#include <stdio.h>
void bubbleSort(int arr[20], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted elements...\n");
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}
int main()
{
    int arr[20], size, i;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter %d elements\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, size);
    return 0;
}
