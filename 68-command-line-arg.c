#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Value of argc is %d\n\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argc[%d]: %s\n", i, argv[i]);
    }

    return 0;
}
