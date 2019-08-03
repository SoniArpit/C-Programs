// if else statement  -> control statement
#include <stdio.h>

int main()
{
    int pass;
    printf("If you pass maths then press 1\nIf you pass science then press 2\nIf you pass both then press 3\n");
    printf("Enter your input: ");

    scanf("%d", &pass);

    if (pass == 1)
    {
        printf("You pass maths only you win 10 Rs.\n");
    }
    else if (pass == 2)
    {
        printf("You pass science only you win 10 Rs.\n");
    }
    else if (pass == 3)
    {
        printf("You Pass Maths and Science Exam You win 45 Rs.\n");
    }
    else
    {
        printf("Mahenat karo!\n");
    }

    return 0;
}
