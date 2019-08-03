#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int size;
    // char *ptr;

    // printf("Enter size of ID no. of Employe 1: ");
    // scanf("%d", &size);
    // ptr = (char *)malloc(size * sizeof(char));

    // printf("Enter Employe ID no.: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf(" %c", &ptr[i]);
    // }
    // printf("Id of Employe 1 is %s\n", ptr);

    // // emp 2

    // printf("\nEnter size of ID no. of Employe 2: ");
    // scanf("%d", &size);
    // ptr = (char *)realloc(ptr, size * sizeof(char));

    // printf("Enter Employe ID no.: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf(" %c", &ptr[i]);
    // }
    // printf("Id of Employe 2 is %s\n", ptr);

    // // emp 3
    // printf("\nEnter size of ID no. of Employe 3: ");
    // scanf("%d", &size);
    // ptr = (char *)realloc(ptr, size * sizeof(char));

    // printf("Enter Employe ID no.: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf(" %c", &ptr[i]);
    // }
    // printf("Id of Employe 3 is %s\n", ptr);

    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employe %d: Enter the number of the character in your employe id\n", i + 1);
        scanf("%d", &chars);

        getchar();

        printf("Enter a: "); // a will be skipped because previous enter consumed by a. a takes previous enter as character and moved to next and ask b for input so use getchar() to avoid this problem
        scanf("%c", &a);

        getchar();

        printf("Enter b: ");
        scanf("%c", &b);

        ptr = (char *)malloc((chars + 1) * sizeof(char));

        printf("Enter your employe ID\n");
        scanf("%s", ptr);

        printf("Your Employe ID is %s\n", ptr);

        free(ptr);
        i = i + 1;
    }

    return 0;
}
