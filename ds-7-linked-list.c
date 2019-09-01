#include <stdio.h>
#include <stdlib.h>
void ins_at_beg();
void ins_at_end();
void ins_at_loc();
void del_at_beg();
void del_at_end();
void del_at_loc();
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
        printf("1. Insert at beginnig of the linked list\n");
        printf("2. Insert at end of the linked list\n");
        printf("3. Insert at particular location in linked list\n");
        printf("4. Delete at begining of the linked list\n");
        printf("5. Delete at end of the linked list\n");
        printf("6. Delete at particular location in linked list\n");
        printf("7. Display\n");
        printf("8. EXIT\n");
        printf("\n\tEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            ins_at_beg();
            break;
        case 2:
            ins_at_end();
            break;
        case 3:
            ins_at_loc();
            break;
        case 4:
            del_at_beg();
            break;
        case 5:
            del_at_end();
            break;
        case 6:
            del_at_loc();
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

void ins_at_beg()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory is not available");
    }
    else
    {

        printf("Enter a value to enter in linked list: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->next = start;
        start = ptr;
    }
}
void ins_at_end()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory is not available");
    }
    else
    {
        printf("Enter a value to enter in linked list: ");
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

void ins_at_loc()
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
        printf("Enter a value to enter in linked list: ");
        scanf("%d", &val);
        ptr->data = val;
        ptr->next = NULL;
        // check List is empty or not
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

void del_at_beg()
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
        printf("\n\t%d is Deleted\t", start->data);
        free(start);
        start = temp;
    }
}
void del_at_end()
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
void del_at_loc()
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

        printf("| %d | %p |-->", t->data, t->next);
        t = t->next;
    }
    printf("| %d | %p |\n\n", t->data, t->next);
}