// predefine macros and other preprocessors
#include <stdio.h>

int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Today's Date is %s\n", __DATE__);
    printf("Time is %s\n", __TIME__);

    printf("Line no. is %d\n", __LINE__);
    printf("ANSI %d\n", __STDC__);

    int a = 3, b = 2;
#if a < b
    printf("a is max");
#endif

    return 0;
}
