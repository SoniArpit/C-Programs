/*
Null pointer is for 
*/
#include <stdio.h>

int main()
{
    int a = 20;
    int *ptr = &a;
    if (ptr != NULL)
    {
        printf("value is %d\n", *ptr);
    }
    else
    {
        printf("Pointer is NULL you can't dereferenced it\n");
    }
    return 0;
}
