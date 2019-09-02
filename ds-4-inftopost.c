#include <stdio.h>
#include <string.h>

char stack[30];
int top = -1;

void infixToPostfix(char *);
void push(char);
char pop();

int main()
{
    char infix[30];
    printf("\nEnter The Infix Expression: ");
    gets(infix);
    // fgets(infix, 30, stdin);

    infixToPostfix(infix);
    return 0;
}

void push(char symbol)
{
    if (top >= 29)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        top = top + 1;
        stack[top] = symbol;
    }
}

char pop()
{
    char item;
    if (top == -1)
    {
        printf("Stack is underflow\n");
    }
    else
    {

        item = stack[top];
        top = top - 1;
        return item;
    }
}

int prec(char symbol)
{
    if (symbol == '^')
    {
        return 5;
    }

    else if (symbol == '*' || symbol == '/' || symbol == '%')
    {
        return 4;
    }

    else if (symbol == '+' || symbol == '-')
    {
        return 3;
    }

    else
    {
        return 2;
    }
}

void infixToPostfix(char infix[])
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
    printf("Postfix Expression: ");
    puts(postfix);
}
