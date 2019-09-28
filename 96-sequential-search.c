#include <stdio.h>
void seqSearch(int a[], int n, int key)
{
    int i, flag;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\n%d found at location %d\n", a[i], i + 1);
    }
    else
    {
        printf("\nElement not found!!\n");
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

    seqSearch(a, n, key);
    return 0;
}
