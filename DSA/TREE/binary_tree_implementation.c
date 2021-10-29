#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create();
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);

int main()
{
    struct node *root = NULL;
    int option;
    while (1)
    {
        printf("\n1.Create Tree \n2.Traverse in preorder \n3.Traverse in inorder \n4.Traverse in postorder \n5.Exit \n");
        printf("\nEnter your choice: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            root = create();
            break;
        case 2:
            preorder(root);
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
}

struct node *create()
{
    int value;
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data (-1 for no data): ");
    scanf("%d", &value);
    if (value == -1)
    {
        return NULL;
    }
    new->data = value;
    printf("\nEnter the left child of %d", value);
    new->left = create();
    printf("\nEnter the right child of %d", value);
    new->right = create();
    return new;
}

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}
