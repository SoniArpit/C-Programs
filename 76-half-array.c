#include <stdio.h>

int main()
{

    int size = 5;
    int arr[] = {1, 1, 2, 1, 1};
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + arr[i];
        printf("%d", sum);
    }

    printf("\n");

    return 0;
}
