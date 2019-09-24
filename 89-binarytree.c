#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data, flag;
    struct node *right;
    struct node *left;
} mynode;

mynode *root;

// creating and inserting node in tree
add_node(int data)
{
    mynode *prev, *cur, *temp;

    temp = (mynode *)malloc(sizeof(mynode));
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;

    if (root == NULL)
    {
        printf("\nCreating the root..\n");
        root = temp;
        return;
    }

    prev = NULL;
    cur = root;

    while (cur != NULL)
    {
        prev = cur;
        cur = (data < cur->data) ? cur->left : cur->right;
    }

    if (data <= prev->data)
        prev->left = temp;
    else
        prev->right = temp;
}

// Recursive Preorder
void preorder(mynode *root)
{
    if (root)
    {
        printf("[%d] ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Iterative Preorder
void iterativePreorder(mynode *root)
{
    mynode *save[100];
    int top = 0;

    if (root == NULL)
    {
        return;
    }

    save[top++] = root;
    while (top != 0)
    {
        root = save[--top];

        printf("[%d] ", root->data);

        if (root->right != NULL)
            save[top++] = root->right;
        if (root->left != NULL)
            save[top++] = root->left;
    }
}

// Recursive Postorder
void postorder(mynode *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("[%d] ", root->data);
    }
}

// Iterative Postorder
void iterativePostorder(mynode *root)
{
    // struct
    // {
    //     mynode *node;
    //     unsigned vleft : 1;  // Visited left?
    //     unsigned vright : 1; // Visited right?
    // } save[100];

    // int top = 0;

    // save[top++].node = root;

    // while (top != 0)
    // {
    //     /* Move to the left subtree if present and not visited */
    //     if (root->left != NULL && !save[top].vleft)
    //     {
    //         save[top].vleft = 1;
    //         save[top++].node = root;
    //         root = root->left;
    //         continue;
    //     }

    //     /* Move to the right subtree if present and not visited */
    //     if (root->right != NULL && !save[top].vright)
    //     {
    //         save[top].vright = 1;
    //         save[top++].node = root;
    //         root = root->right;
    //         continue;
    //     }

    //     printf("[%d] ", root->data);

    //     /* Clean up the stack */
    //     save[top].vleft = 0;
    //     save[top].vright = 0;

    //     /* Move up */
    //     root = save[--top].node;
    // }

    mynode *stack[100];
    int top = -1;
    mynode *temp = root;
    while (temp != NULL)
    {
        while (temp != NULL)
        {
            top++;
            stack[top] = temp;
            temp = temp->left;
        }
    label:
        temp = stack[top];
        top--;
        if (temp->flag == 1)
        {
            printf("[%d] ", temp->data);
            break;
        }
        else
        {
            temp->flag = 1;
            top++;
            stack[top] = temp;
            temp = temp->right;
        }
    }
    if (top >= 0)
        goto label;
}

// Recursive Inorder
void inorder(mynode *root)
{
    if (root)
    {
        inorder(root->left);
        printf("[%d] ", root->data);
        inorder(root->right);
    }
}

// Iterative Inorder..
void iterativeInorder(mynode *root)
{
    int top = 0;
    mynode *s[20], *pt = root;
    s[0] = NULL;
    while (pt != NULL)
    {
        s[++top] = pt;
        pt = pt->left;
    }
    pt = s[top--];
    while (pt != NULL)
    {
        printf("[%d] ", pt->data);
        if (pt->right != NULL)
        {
            pt = pt->right;
            while (pt != NULL)
            {
                s[++top] = pt;
                pt = pt->left;
            }
        }
        pt = s[top--];
    }
}

int main()
{
    int n, number;
    char ch;
    root = NULL;
    do
    {
        printf("\nPlease enter a number: ");
        scanf("%d", &n);
        add_node(n);
        printf("\nDo you insert more (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch != 'n');

    printf("\nPreorder (R)    : ");
    preorder(root);
    printf("\nPreorder (I)    : ");
    iterativePreorder(root);

    printf("\n\nPostorder (R)   : ");
    postorder(root);
    printf("\nPostorder (R)   : ");
    iterativePostorder(root);

    printf("\n\nInorder (R)     : ");
    inorder(root);
    printf("\nInorder (I)     : ");
    iterativeInorder(root);

    return 0;
}
