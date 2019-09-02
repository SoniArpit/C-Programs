#include <stdio.h>
#include <stdlib.h>

void insertInQueue();
void deleteInQueue();
void display();

int f = -1, r = -1, size, queue[50];

int main()
{
    int ch;
    printf("Enter size of the queue: ");
    scanf("%d", &size);
    do
    {
        printf("\n\n1. Insert in queue\n");
        printf("2. Delete in queue\n");
        printf("3. Diplay\n");
        printf("4. Exit\n");
        printf("\n\tEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertInQueue();
            break;
        case 2:
            deleteInQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("Something went wrong !! Pleasw try again\n");
            break;
        }
    } while (ch != 4);
    return 0;
}

void insertInQueue()
{
    int val;
    if (r == size - 1)
    {
        printf("\n\t\tQueue is Full\n\n");
    }
    else
    {
        printf("Enter value to insert in queue: ");
        scanf("%d", &val);
        if (f == -1 && r == -1)
        {
            f = r = 0;
        }
        else
        {
            r++;
        }
        queue[r] = val;
    }
}
void deleteInQueue()
{
    if (f == -1)
    {
        printf("\n\t\tQueue is Empty\n\n");
    }
    else
    {
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f++;
        }
    }
}
void display()
{
    int i;
    if (f == -1)
    {
        printf("\n\t\tQueue is Empty\n\n");
    }
    else
    {
        printf("\n\nElements in Queue\n\n");
        for (i = f; i <= r; i++)
        {
            printf("| %d |", queue[i]);
        }
        printf("\n");
    }
}