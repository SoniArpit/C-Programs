#include <stdio.h>
#include <string.h>
void parser(char str[])
{
    int flag = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        // printf("%c", str[i]);
        if (str[i] == '<')
        {
            flag = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            flag = 0;
            continue;
        }
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            continue;
        }
        if (flag == 0)
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
int main()
{
    char str[] = "<h1> This        is Heading 1 </h1>";
    parser(str);

    return 0;
}
