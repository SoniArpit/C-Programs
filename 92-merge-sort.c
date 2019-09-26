#include <stdio.h>
void merge(int a[], int s, int mid, int e)
{
    int n1 = mid - s + 1, n2 = e - mid, l[30], r[30], i, j, k;
    for (i = 0; i < n1; i++)
        l[i] = a[s + i];
    for (j = 0; j < n2; j++)
        r[j] = a[mid + 1 + j];

    i = 0;
    j = 0;
    k = s;
    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = l[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = r[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int s, int e)
{
    if (s < e)
    {
        int mid = (s + e) / 2;
        mergeSort(a, s, mid);
        mergeSort(a, mid + 1, e);
        merge(a, s, mid, e);
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
    mergeSort(a, 0, n - 1);

    printf("\nSorted elements...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
