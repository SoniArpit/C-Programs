/*
km to miles
inches to foot
cms to inches
pound to kgs
inches to meter
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch;
    float km, inches, cm, pound;
    while (1)
    {
        printf("\nPress 1 to convert KM to Miles\n");
        printf("Press 2 to convert Inches to Foot\n");
        printf("Press 3 to convert CM to Miles\n");
        printf("Press 4 to convert Pound to KG\n");
        printf("Press 5 to convert Inches to Meter\n");
        printf("Press 6 to Exit\n");
        printf("\nEnter Your Choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Kilo Meters: ");
            scanf("%f", &km);
            printf("KM to Miles is %f\n", km * 0.62137);
            break;

        case 2:
            printf("Enter Inches: ");
            scanf("%f", &inches);
            printf("Inches to Foot is %f\n", inches / 12);
            break;

        case 3:
            printf("Enter Centi Meter: ");
            scanf("%f", &cm);
            printf("Centi Meter to Miles is %f\n", cm / 160934.4);
            break;

        case 4:
            printf("Enter Pound: ");
            scanf("%f", &pound);
            printf("Pound to Kilogram is %f\n", pound / 2.2046);
            break;

        case 5:
            printf("Enter Inches: ");
            scanf("%f", &inches);
            printf("Inches to Meter is %f\n", inches / 39.370);
            break;

        case 6:
            exit(1);

        default:
            exit(1);
        }
    }

    return 0;
}
