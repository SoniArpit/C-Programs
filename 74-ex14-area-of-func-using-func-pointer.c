#include <stdio.h>
#include <math.h>

float Edistance(float x1, float y1, float x2, float y2)
{
    float distance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    return sqrt(distance);
}

float areaOfCircle(float x1, float y1, float x2, float y2, float (*distance)(float x1, float y1, float x2, float y2))
{
    return 3.14 * distance(x1, y1, x2, y2) * distance(x1, y1, x2, y2);
}
int main()
{
    int x1, y1, x2, y2;

    // printf("%f\n", pow(3, 2));
    float val = areaOfCircle(0, 6, 0, 1, Edistance);
    printf("distance is %f\n", val);

    return 0;
}
