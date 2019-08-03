/*
Memory allocation in c

1. code  -> text segment

2. Static/Global Variable
        /             \
    Data segment      BSS segment BSS-block started by symbol
    (initialized       (Unitialized segment)
    storage)

3. stack - grow when program going

4. heap - grow when allocate dynamic memory
*/

#include <stdio.h>

int main()
{
    printf("Hello");
    return 0;
}
