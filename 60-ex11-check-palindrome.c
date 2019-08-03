#include <stdio.h>
#include <string.h>
int isPalindrome(int num)
{
    int rem, rev = 0, i;
    int tempNum = num;
    while (num != 0)
    {
        rem = num % 10;       //123 = ,3, 2,
        rev = rev * 10 + rem; // = 3,32,320+1 321
        num /= 10;            // 12,1,
    }

    if (rev == tempNum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check weather a number is palindrome or not\n");
    scanf("%d", &number);

    // printf("%d\n", isPalindrome(121));
    if (isPalindrome(number))

    {
        printf("%d is palindrome\n", number);
    }
    else
    {
        printf("%d not palindrome\n", number);
    }

    return 0;
}
