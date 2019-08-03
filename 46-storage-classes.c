/*
Storage classes in C

1. Automatic Variables 
2. External Variables 
3. Static Variables
4. Register Variables
*/

#include <stdio.h>

int myFunc(int a, int b)
{
    // auto int sum;
    // sum = a + b;
    // extern int sum;
    static int sum;
    sum++;
    printf("The sum is %d\n", sum);
    return sum;
}
int sum = 1029;
int main()
{
    register int sum = myFunc(2, 4);
    sum = myFunc(2, 4);
    sum = myFunc(2, 4);
    sum = myFunc(2, 4);

    // printf("The sum is %d\n", sum);
    return 0;
}
