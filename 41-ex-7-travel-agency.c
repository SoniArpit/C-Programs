// travel agency manager

#include <stdio.h>
#include <string.h>

struct driverDetail
{
    char name[100];
    int licenseNo;
    char route[100];
    int kms;
};

int main()
{
    int driverSize;
    char driverName[100];
    printf("How many drivers are their: ");
    scanf("%d", &driverSize);

    struct driverDetail drivers[driverSize];

    for (int i = 0; i < driverSize; i++)
    {
        printf("\nEnter %d Driver's Name: ", i + 1);
        scanf("%s", &drivers[i].name);
        printf("Enter License No.: ");
        scanf("%d", &drivers[i].licenseNo);
        printf("Enter route (i.e. BhujtoRajkot): ");
        scanf("%s", &drivers[i].route);
        printf("Enter KiloMeters: ");
        scanf("%d", &drivers[i].kms);
    }

    printf("\nDriver details: \n\n");
    for (int i = 0; i < driverSize; i++)
    {
        printf("Name: %s\n", drivers[i].name);
        printf("License No.: %d\n", drivers[i].licenseNo);
        printf("Route is: %s\n", drivers[i].route);
        printf("KiloMeters: %d\n\n", drivers[i].kms);
    }

    return 0;
}
