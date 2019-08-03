#include <stdio.h>
void doAddSub(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
}
int main()
{
    int a = 4, b = 3;
    doAddSub(&a, &b);
    printf("Add  %d\n", a);
    printf("Sub  %d\n", b);
    return 0;
}
