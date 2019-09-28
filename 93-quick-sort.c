#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int l, int h)
{
    int pivot = a[l], i = l, j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
            swap(&a[i], &a[j]);
    }
    swap(&a[l], &a[j]);
    return j;
}

void quickSort(int a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quickSort(a, l, j);
        quickSort(a, j + 1, h);
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
    quickSort(a, 0, n - 1);
    printf("\nSorted elements...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
