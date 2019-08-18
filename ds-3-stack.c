#include <stdio.h>
#include <stdlib.h>
int val, stack[100], top = -1, size;
void push();
void pop();
void peep();
void update();
void display();

int main()
{
    char ch;
    printf("Enter Size of Stack: ");
    scanf("%d", &size);
    do
    {
        printf("\n1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEP\n");
        printf("4. UPDATE\n");
        printf("5. DISPLAY\n");
        printf("Enter 'E' to EXIT\n\n");
        printf("Enter Your Choice: ");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '1':
            printf("Push\n");
            push();
            break;
        case '2':
            printf("Pop\n");
            pop();
            break;
        case '3':
            printf("Peep\n");
            peep();
            break;
        case '4':
            printf("Update\n");
            update();
            break;
        case '5':
            printf("Display\n");
            display();
            break;
        case 'E':
            printf("\tBye!\n");
            exit(1);
        default:
            break;
        }

    } while (ch != 6);
    return 0;
}
void push()
{
    if (top == size - 1)
    {
        printf("\n\tStack is Overflow\n\n");
    }
    else
    {
        printf("Enter a value to be Push in Stack: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\n\tStack is Underflow\n\n");
    }
    else
    {
        printf("\n\tPopped Value is %d", stack[top]);
        top--;
    }
}

void peep()
{
    if (top == -1)
    {
        printf("\n\tStack is Underflow\n\n");
    }
    else
    {
        printf("\n\tTop of the value in Stack (Peep): %d", stack[top]);
    }
}
void update()
{
    int pos;
    display();
    printf("Enter position to change: ");
    scanf("%d", &pos);
    printf("Now enter your new value: ");
    scanf("%d", &val);
    stack[pos - 1] = val;
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\n\tStack is Empty!\n\n");
    }
    else
    {
        printf("\n\tStack elements are:\n\n");
        for (i = top; i >= 0; i--)
        {
            printf("\t|    %d    |\n", stack[i]);
            printf("\t|----------|\n");
        }
    }
}