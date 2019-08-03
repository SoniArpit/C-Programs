#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *changeWord(char *str, char *oldWord, char *newWord)
{

    int i, count = 0;
    char *resultString;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // jump over this word
            i = i + oldWordLength - 1;
        }
    }
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        //compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i++;
            str++;
        }
    }
    resultString[i] = '\0';

    return resultString;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    char string[200];
    ptr = fopen("66-letter.txt", "r");
    ptr2 = fopen("66-genbill.txt", "w");
    printf("\n");
    fgets(string, 200, ptr);
    printf("%s\n\n", string);

    char *newStr;
    newStr = changeWord(string, "{{name}}", "Arpit");
    newStr = changeWord(newStr, "{{item}}", "Cycle");
    newStr = changeWord(newStr, "{{outlet}}", "Cycle Store");
    printf("%s\n\n", newStr);

    fprintf(ptr2, "%s", newStr);

    fclose(ptr);
    fclose(ptr2);

    return 0;
}
