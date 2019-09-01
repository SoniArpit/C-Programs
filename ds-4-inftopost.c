#include <stdio.h>
#include <string.h>
#define SIZE 30

char stack[30];
int top = -1;

void infix_to_postfix(char *);
void push(char);
char pop();

int main()
{
    char infix[SIZE];
    printf("\n Enter the infix expression");
    gets(infix);

    infix_to_postfix(infix);
    return 0;
}

void push(char symbol)
{
    if (top >= 29)
    {
        printf("stack is overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = symbol;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("stack is underflow");
    }
    else
    {
        top = top - 1;
    }
}

int prec(char symbol)
{
    if (symbol == '^')
        return 5;

    else if (symbol == '*' || symbol == '/' || symbol == '%')
        return 4;

    else if (symbol == '+' || symbol == '-')
        return 3;

    else
        return 2;
}

void post(char infix[])
{
    int l;
    int index = 0, pos = 0;
    char symbol, temp;
    char postfix[40];
    l = strlen(infix);
    push(index);
    while (index < l)
    {
        symbol = infix[index];
        switch (symbol)
        {
        case '(':
            push(symbol);
            break;
        case ')':
            temp = pop();
            while (temp != '(')
            {
                postfix[pos] = temp;
                pos++;
                temp = pop();
            }
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            while (prec(stack[top]) >= prec(symbol))
            {
                temp = pop();
                postfix[pos] = temp;
                pos++;
            }
            push(symbol);
            break;
        default:
            postfix[pos++] = symbol;
            break;
        }
        index++;
    }
    while (top > 0)
    {
        temp = pop();
        postfix[pos++] = temp;
    }
    postfix[pos++] = '\0';
    puts(postfix);
    return;
}
