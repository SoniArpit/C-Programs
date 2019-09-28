#include <stdio.h>
void binarySearch(int a[], int l, int h, int key)
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key < a[mid])
        {
            h = mid - 1;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
        else if (key == a[mid])
        {
            printf("\n%d found at location %d\n", a[mid], mid + 1);
            break;
        }
        else
        {
            printf("\nElement not found!!\n");
        }
    }
}
int main()
{
    int a[20], i, n, key;
    printf("How many values will you enters? : ");
    scanf("%d", &n);
    printf("Enter %d values\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter element to find: ");
    scanf("%d", &key);

    binarySearch(a, 0, n - 1, key);
    return 0;
}
