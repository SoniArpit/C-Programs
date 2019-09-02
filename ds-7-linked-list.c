#include <stdio.h>
#include <stdlib.h>
void insAtBeg();
void insAtEnd();
void insAtLoc();
void delAtBeg();
void delAtEnd();
void delAtLoc();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *start;
int val;
int main()
{
    int ch;

    do
    {
        printf("\n\tLinked List\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Particular Location\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Particular Location\n");
        printf("7. Display\n");
        printf("8. EXIT\n");

        printf("\n\tEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insAtBeg();
            break;
        case 2:
            insAtEnd();
            break;
        case 3:
            insAtLoc();
            break;
        case 4:
            delAtBeg();
            break;
        case 5:
            delAtEnd();
            break;
        case 6:
            delAtLoc();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(1);
        default:
            break;
        }
    } while (ch != 8);

    return 0;
}

void insAtBeg()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory is not available");
    }
    else
    {

        printf("Enter a value to insert in linked list: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->next = start;
        start = ptr;
    }
}
void insAtEnd()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory is not available");
    }
    else
    {
        printf("Enter a value to insert in linked list: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->next = NULL;
        if (start == NULL)
        {
            start = ptr;
        }
        else
        {
            struct node *temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
        }
    }
}

void insAtLoc()
{
    struct node *ptr, *temp, *pretemp;
    int loc;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory is not available");
    }
    else
    {
        printf("Enter location(number) to enter: ");
        scanf("%d", &loc);
        printf("Enter a value to insert in linked list: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->next = NULL;
        if (start == NULL)
        {
            start = ptr;
        }
        else
        {

            temp = start;
            pretemp = start;
            while (pretemp->data != loc)
            {
                pretemp = temp;
                temp = temp->next;
            }
            ptr->next = pretemp->next;
            pretemp->next = ptr;
        }
    }
}

void delAtBeg()
{
    if (start == NULL)
    {
        printf("\n\tList is Empty\n\n");
    }
    else
    {
        struct node *temp = start;
        int ptr = start->data;
        temp = start->next;
        printf("\n\t%d is Deleted\t", ptr);
        free(start);
        start = temp;
    }
}
void delAtEnd()
{
    if (start == NULL)
    {
        printf("\n\tList is Empty\n\n");
    }
    else
    {
        struct node *ptr, *prevptr;
        ptr = start;
        while (ptr->next != NULL)
        {
            prevptr = ptr;
            ptr = ptr->next;
        }
        prevptr->next = NULL;
        printf("\n\t%d is Deleted\t", ptr->data);
        free(ptr);
    }
}
void delAtLoc()
{
    int num;
    struct node *ptr, *temp, *preptr;
    if (start == NULL)
    {
        printf("\n\tList is Empty\n\n");
    }
    else
    {
        printf("Enter number to delete: ");
        scanf("%d", &num);
        ptr = start;
        preptr = start;
        while (ptr->data != num)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        printf("\n\t%d is Deleted\t", ptr->data);
        free(ptr);
    }
}
void display()
{
    struct node *t;
    t = start;
    while (t->next != NULL)
    {

        printf("| %d |-->", t->data);
        t = t->next;
    }
    printf("| %d |\n\n", t->data);
}