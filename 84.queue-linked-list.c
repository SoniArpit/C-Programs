#include <stdio.h>
#include <stdlib.h>
void insertQ();
void deleteQ();
void displayQ();
struct node
{
    int data;
    struct node *next;
};
struct node *r = NULL, *f = NULL;

int main()
{
    int ch;

    do
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit\n\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertQ();
            break;
        case 2:
            deleteQ();
            break;
        case 3:
            displayQ();
            break;
        case 4:
            exit(0);
        default:
            printf("Something went wrong!!");
            break;
        }
    } while (ch != 4);

    return 0;
}
void insertQ()
{
    struct node *ptr;
    int val;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter value to insert in queue: ");
    scanf("%d", &val);

    ptr->data = val;
    ptr->next = NULL;

    if (f == NULL)
    {
        f = r = ptr;
    }
    else
    {

        r->next = ptr;
        r = ptr;
    }
}
void deleteQ()
{
    if (f == NULL)
    {
        printf("\n\tQueue is Empty\n\n");
    }
    else
    {
        struct node *temp = f;
        f = f->next;
        printf("\nPopped value %d", temp->data);
        free(temp);
    }
}
void displayQ()
{
    if (f == NULL)
    {
        printf("\n\tQueue is Empty\n\n");
    }
    else
    {
        struct node *temp = f;
        while (temp->next != NULL)
        {
            printf("| %d |", temp->data);
            temp = temp->next;
        }
        printf("| %d |\n", temp->data);
    }
}