#include <stdio.h>

int isPalindrome(int num)
{
    int reversed = 0;
    int originalNum = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    if (originalNum == reversed)
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
