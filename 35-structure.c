// dot (.) operator use to access member of structure. this dot also known as stucture member operator

#include <stdio.h>
#include <string.h>
struct fans
{
    char f_name[50];
    char fav_superhero[100];
    int f_id;
};

int main()
{
    struct fans arpit, harry;
    strcpy(arpit.f_name, "Arpit");
    strcpy(arpit.fav_superhero, "Iron Man");
    arpit.f_id = 20;

    strcpy(harry.f_name, "Harry");
    strcpy(harry.fav_superhero, "Harry Potter");
    harry.f_id = 30;

    printf("Id of %s is %d and favorite superhero is \'%s\'\n", arpit.f_name, arpit.f_id, arpit.fav_superhero);
    printf("Id of %s is %d and favorite superhero is \'%s\'\n", harry.f_name, harry.f_id, harry.fav_superhero);

    return 0;
}
