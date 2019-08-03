#include <stdio.h>
#include <string.h>

union student {
    int marks;
    char fav_char;
    char name[35];
};
int main()
{
    union student s1;
    s1.marks = 20;
    s1.fav_char = 'a';
    strcpy(s1.name, "Arpit");

    printf("Marks is %d\n", s1.marks);
    printf("Favorit Character is %c\n", s1.fav_char);
    printf("Name is %s\n", s1.name);

    return 0;
}
