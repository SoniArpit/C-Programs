// Synstax: typedef <prev_datatype_name> <alias name>

#include <stdio.h>

/*typedef*/ struct student
{
    int marks;
    char name[100];
} /*std*/;

int main()
{
    typedef unsigned long ul;
    ul l1, l2;

    // int *a, b; it's not make b as a pointe variable so
    typedef int *intptr; //now a,b both becomes pointer using intptr
    intptr a, b;         // here
    int c = 10;
    a = &c;
    b = &c;

    // struct student s1, s2; yeh hai normal jindagi
    // std s1, s2; //yeh hai mentos jindagi using typedef
    typedef struct student std;
    std s1, s2;
    s1.marks = 20;

    return 0;
}
