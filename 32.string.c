// char name[]="arpit"; null is last of char
// char name[]={'a','r','p','i','t','\0'} we need to put null in last

// gets(str) you dont need to write null while get string from user

#include <stdio.h>

int main()
{
    int i = 0;
    // char name[] = {'a', 'r', 'p', 'i', 't'}; // in my case i don't need to put null char
    char name[30];
    // printf("Using percentage c and loop:\n");
    // while (name[i] != '\0')
    // {
    //     printf("%c", name[i]);
    //     i++;
    // }
    // printf("\n");

    // printf("\nprint string using percentage s:\n");
    // printf("%s\n", name);

    printf("\nEnter string using gets(): ");
    gets(name);
    // printf("Print string using puts()\n");
    // puts(name);
    return 0;
}
