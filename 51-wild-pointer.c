// uninitialized pointers are knows as wild pointer
// its wild bcz its point arbitary location in memory and cause a program to crash or behave badly
#include <stdio.h>
int main()
{
    int a = 20;
    int *ptr; // here ptr is become wild pointer bcz its not pointing any adress or not initalized

    ptr = &a;   // now its no longer wild pointer
    ptr = NULL; // now its also no longer wild pointer

    return 0;
}
