#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "arpit";
    char s2[] = "harry";
    char s3[33];
    // printf("strcat: %s\n", strcat(s1, s2));
    // printf("%s", strrev(s2));
    // printf("strlen %d\n", strlen(s1));
    // printf("strcmp %d\n", strcmp(s1, s2));
    strcpy(s3, s1);
    // printf("strcpy %s\n", s3);

    return 0;
}
