#include <stdio.h>
void changeNum(int a)
{
    printf("Before add 100 %d\n", a);
    a = a + 100;
    printf("After add 100 %d\n", a);
}
int main()
{
    int a = 50;
    printf("Before function call %d\n", a);
    changeNum(a);
    printf("After function call %d\n", a);
    return 0;
}
