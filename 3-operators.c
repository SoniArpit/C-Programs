#include <stdio.h>

int main()
{
    int a = 2, b = 3;

    printf("\nArithmetic operators\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    printf("\nRelaional operators\n");
    printf("a == b = %d\n", a == b); //many more ops like !=,>,<,<=,>=

    printf("\nLogical operators\n");
    printf("a && b = %d\n", !b); // &&, ||

    printf("\nBitwise operators\n");
    printf("a & b = %d\n", a & b); // |, ^

    printf("\nOther Bitwise operators\n");
    printf("a & b = %d\n", a << 2); // >>, ~

    printf("\nAssignment operators\n");
    printf("=,+=,-=,*=,/=\n");

    printf("\nMiscellaneous operators\n");
    printf("sizeof(), & -address, * -pointer, ?: -conditional\n");

    return 0;
}
