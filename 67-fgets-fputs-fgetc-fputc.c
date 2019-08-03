#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("63-myfile.txt", "r+");
    // char c = fgetc(ptr);
    // printf("%c\n", c);
    // c = fgetc(ptr);
    // printf("%c\n", c);

    char str[100];
    fgets(str, 100, ptr);
    printf("%s\n", str);

    fputc('o', ptr);

    fputs("Arpit is good", ptr);
    fclose(ptr);
    return 0;
}
