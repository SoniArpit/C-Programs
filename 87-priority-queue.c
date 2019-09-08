#include <stdio.h>
#include <stdlib.h>
int pq[20], size, front = -1, rear = -1;
void insert(int val)
{
    if (rear == size - 1)
    {
        printf("\nQueue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        rear = front = 0;
        pq[rear] = val;
    }
    else
    {
        check(val);
    }
    rear++;
}
void delete () {}
void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)

        {
            printf("| %d |[%d]", pq[i], i);
        }
    }
}
void check(int val)
{
    int i, j;
    for (i = rear; i >= 0; i--)
    {
        if (val > pq[i])
        {
            pq[i + 1] = pq[i];
        }
        else
        {
            break;
        }
        pq[i] = val;
    }
}
int main()
{
    int ch, val;
    printf("Enter size of the queue: ");
    scanf("%d", &size);
    do
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter value to insert in queue: ");
            scanf("%d", &val);
            insert(val);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit;
        default:
            break;
        }
    } while (ch != 4);
    return 0;
}
