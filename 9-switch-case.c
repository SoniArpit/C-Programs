// rule: only integer and character
#include <stdio.h>
int main()
{
    int age;
    char choice;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age)
    {
    case 18:
        printf("You are now 18\n");
        printf("Do you have driving license(y/n): ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case 'Y':
            printf("Now You Can Drive\n");
            break;

        case 'y':
            printf("Now You Can Drive\n");
            break;

        default:
            printf("Pahele Licence Nikalvao\n");
            break;
        }
        break;
    default:
        printf("No, You are not exact 18\n");
        break;
    }
    return 0;
}
