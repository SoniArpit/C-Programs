#include <stdio.h>
int main()
{
label:
    printf("infinite");
    goto end;
    goto label;

end:
    return 0;
}
