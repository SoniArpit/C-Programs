/*
A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer
*/

#include <stdio.h>
#include <stdlib.h>
int *dangPtrFunc()
{
    int a = 20;
    return &a;
}
int main()
{
    //Case 1: Deallocate of a memory block
    int *dangPtr = (int *)malloc(7 * sizeof(int));
    dangPtr[0] = 10;
    dangPtr[1] = 20;
    dangPtr[3] = 30;

    free(dangPtr);  // here dangPtr becomes dangling pointer
    dangPtr = NULL; // now dangPtr no longer dangling pointer bcz of assiging null
    // printf("%d\n", *(dangPtr + 1));

    //Case 2: Function returning local variable address
    int *dangPtr2 = dangPtrFunc(); // dangPtr2 is dangling pointer now
    // printf("%d\n", *dangPtr2);

    //Case 3: If a variable goes out of scope
    int *dangPtr3;
    {
        int var = 50;
        dangPtr3 = &var;
    }
    printf("%d\n", *dangPtr3); // varible var khatam

    return 0;
}
