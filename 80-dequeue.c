#include <stdio.h>
#include <stdlib.h>
void insR();
void insL();
void delR();
void delL();
void disp();
int dq[50], l = -1, r = -1, n, val;
void main()
{
    int ch;
    printf("Enter size of the queue: ");
    scanf("%d", &n);

    do
    {
        printf("\n1. Insert from Right\n");
        printf("2. Insert from Left\n");
        printf("3. Delete from Right\n");
        printf("4. Delete from Left\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("\n\tEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insR();
            break;
        case 2:
            insL();
            break;
        case 3:
            delR();
            break;
        case 4:
            delL();
            break;
        case 5:
            disp();
            break;
        case 6:
            exit(1);

        default:
            printf("\n\tSomething went wrong!! Please Try Again :(\n\n");
        }
    } while (ch != 6);
}
void insR()
{
    printf("\nEnter value from right: ");
    scanf("%d", &val);
    if ((l == 0 && r == n - 1) || (l == r + 1))
    {
        printf("\n\t\tDeQueue is Full\n\n");
    }
    else
    {
        if (l == -1)
        {
            l = r = 0;
        }
        else if (r == n - 1)
        {
            r = 0;
        }
        else
        {
            r++;
        }
        dq[r] = val;
    }
}

void insL()
{
    printf("\nEnter value from left: ");
    scanf("%d", &val);
    if ((l == 0 && r == n - 1) || (r == l - 1))
    {
        printf("\n\t\tDeQueue is Full\n\n");
    }
    else
    {
        if (l == -1)
        {
            l = r = 0;
        }
        else if (l == 0)
        {
            l = n - 1;
        }
        else
        {
            l--;
                }
        dq[l] = val;
    }
}

void delR()
{
    if (l == -1 && r == -1)
    {
        printf("\n\t\tDeQueue is Empty!!\n\n");
    }
    else
    {
        if (l == r)
        {
            l = r = -1;
        }
        else if (r == 0)
        {
            r = n - 1;
        }
        else
        {
            r--;
        }
    }
}

void delL()
{
    if (l == -1 && r == -1)
    {
        printf("\n\t\tDeQueue is Empty!!\n\n");
    }
    else
    {
        if (l == r)
        {
            l = r = -1;
        }
        else if (l == n - 1)
        {
            l = 0;
        }
        else
        {
            l++;
        }
    }
}

void disp()
{
    int i;
    if (l == 0)
    {
        printf("\n\t\tQueue is Empty. Nothing to Display\n\n");
    }
    if (l <= r)
    {
        for (i = l; i <= r; i++)
        {
            printf("[%d]=%d\t", i, dq[i]);
        }
    }
    else
    {
        for (i = l; i <= n - 1; i++)
        {
            printf("[%d]=%d\t", i, dq[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf("[%d]=%d\t", i, dq[i]);
        }
    }

    //     if (l == -1)
    // {
    //     printf("\nQueue is Empty\n");
    //     return;
    // }
    // printf("\nThe elements in the queue are: ");
    // if (l <= r)
    // {
    //     while (l <= r)
    //     {
    //         printf("%d\t", dq[l]);
    //         l++;
    //     }
    // }
    // else
    // {
    //     while (l <= n - 1)
    //     {
    //         printf("%d\t", dq[l]);
    //         l++;
    //     }
    //     l = 0;
    //     while (l <= r)
    //     {
    //         printf("%d\t", dq[l]);
    //         l++;
    //     }
    // }
    // printf("\n");
}