// ds program tutorial

#include <stdio.h>
#include <stdlib.h>
struct BST
{
    int data;
    struct BST *left, *right;
};

struct BST *createNode(int n)
{
    struct BST *newNode;
    newNode = (struct BST *)malloc(sizeof(struct BST));
    newNode->data = n;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct BST *insert(struct BST *root, int n)
{
    if (root == NULL)
    {
        root = createNode(n);
    }
    else if (n <= root->data)
    {
        root->left = insert(root->left, n);
    }
    else
    {
        root->right = insert(root->right, n);
    }
    return root;
}

int search(struct BST *root, int number)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (number == root->data)
    {
        return 1;
    }
    else if (number <= root->data)
    {
        return search(root->left, number);
    }
    else
    {
        return search(root->right, number);
    }
}
int main()
{
    struct BST *root = NULL;
    int n, number;
    char ch;
    do
    {
        printf("\nPlease enter a number: ");
        scanf("%d", &n);
        root = insert(root, n);

        printf("\nDo you insert more (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch != 'n');

    printf("\nEnter a number to be search: ");
    scanf("%d", &number);
    if (search(root, number) == 1)
    {
        printf("\nElement found successfully!!\n");
    }
    else
    {
        printf("\nElement not found!!\n");
    }

    return 0;
}
