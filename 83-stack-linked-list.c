#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void peep();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *top;
int val;

int main()
{
    int ch;
    do
    {
        printf("\n\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);

        default:
            printf("Something went wrong!!");
            break;
        }
    } while (ch != 5);
    return 0;
}
void push()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter a value to insert in stack: ");
    scanf("%d", &val);
    ptr->data = val;
    if (top == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        ptr->next = top;
    }
    top = ptr;
}
void pop()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        struct node *temp = top;
        temp = top->next;
        printf("\n\tDeleted element is %d", top->data);
        free(top);
        top = temp;
    }
}
void peep()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("\n\tTop of the value %d", top->data);
    }
}
void display()
{
    struct node *t;
    t = top;
    while (t->next != NULL)
    {

        printf("| %d |\n", t->data);
        printf(" ---- \n");
        t = t->next;
    }
    printf("| %d |\n", t->data);
    printf(" ---- \n\n");
}