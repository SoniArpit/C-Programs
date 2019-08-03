// // do while loop executes at least once
// #include <stdio.h>
// int main()
// {
//     int num, index = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     do
//     {
//         index++;
//         printf("%d\n", index);
//     } while (index < num);

//     return 0;
// }
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 10;
    do
    {
        printf("%d\n", i);
    } while (i < 10);

    return 0;
}
