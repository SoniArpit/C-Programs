#include <stdio.h>

int main(int argc, char const *argv[])
{
    float sum = 0;
    for (int i = 0; i < argc; i++)
    {
        // sum = sum + atoi(argv[i]);
        switch (*argv[i])
        {
        case 'a':
            sum = atoi(argv[i + 1]) + atoi(argv[i + 2]);
            break;

        case 's':
            sum = atoi(argv[i + 1]) - atoi(argv[i + 2]);
            break;

        case 'm':
            sum = atoi(argv[i + 1]) * atoi(argv[i + 2]);
            break;

        case 'd':
            sum = atoi(argv[i + 1]) / atoi(argv[i + 2]);
            break;

        case 'h':
            printf("Command Line CALC\n");
            printf("Add: a [number 1] [number2]\n");
            printf("Sub: s [number 1] [number2]\n");
            printf("Mul: m [number 1] [number2]\n");
            printf("Div: d [number 1] [number2]\n");
            break;

        default:
            break;
        }
    }
    printf("\n%f\n", sum);
    return 0;
}
