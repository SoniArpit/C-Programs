#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    char string[50] = "arpit is best again";

    // ******Reading a file******
    // ptr = fopen("63-myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("%s\n", string);

    // Write into File
    // ptr = fopen("63-myfile.txt", "w");
    // fprintf(ptr, "%s", string);

    // Append in file
    ptr = fopen("63-myfile.txt", "a");
    fprintf(ptr, "%s", string);

    return 0;
}
