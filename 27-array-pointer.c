#include <stdio.h>

int main()
{

    int arr[] = {32, 44, 33, 26, 66};

    printf("address of first element %d\n", &arr[0]);
    printf("address of first element %d\n", arr);
    printf("address of first element %d\n", &arr[1]);
    printf("address of first element %d\n\n", arr + 1);

    printf("value of first element %d\n", *&arr[0]);
    printf("value of first element %d\n", *arr);
    printf("value of first element %d\n", *&arr[1]);
    printf("value of first element %d\n", *(arr + 1));
    return 0;
}
