#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, *i2;
    while (i < 3000)
    {
        printf("Welcome\n");
        i2 = malloc(2000 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // without this memory leak occurs and program size increases
    }

    return 0;
}
