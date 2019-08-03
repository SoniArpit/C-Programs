#include <stdio.h>

int main()
{
    int marks[10];
    // int marks[]={2,3,4,3,,3};

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Marks of the studen %d: ", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Marks of the student %d is %d in %c\n", i, marks[i]);
    }

    return 0;
}
