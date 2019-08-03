#include <stdio.h>

int func1()
{
    static int a = 10;
    printf("static variable a is %d\n", a);
    a++;
}
int main()
{
    int val;
    func1();
    func1();
    func1();

    // printf("Value is %d\n", val);
    return 0;
}
