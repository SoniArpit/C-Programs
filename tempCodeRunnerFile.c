#include <stdio.h>
void selectionSort(int a[20], int n)
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("\nSorted elements...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int a[20], i, n;
    printf("How many values will you enters? : ");
    scanf("%d", &n);
    printf("Enter %d values\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    selectionSort(a, n);
    return 0;
}
