#include<stdio.h> 

struct node
{
    int data;
    struct node *left,*right;
};

struct node *create();
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);
struct node *search(struct node*,int);
int main()
{
    struct node *root = NULL;
    int option;
    while (1)
    {
        printf("\n1.Create Tree \n2.Traverse in preorder \n3.Traverse in inorder \n4.Traverse in postorder \n5.Exit \n6.Search \n");
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
        case 6:
            int value;
            printf("\nEnter the element to search: ");
            scanf("%d",&value);
            search(root,value);
        default:
            break;
        }
    }
}

struct node *create()
{
    int value;
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    new->left = NULL;
    new->right = NULL;
    printf("\n Enter the value(-1 for no value):  ");
    scanf("%d",&value);
    if (value == -1)
    {
        return;
    }
    new->data = value;
    printf("\nEnter the left child of %d ",value);
    new->left = create();
    printf("\nEnter the right child of %d ",value);
    new->right = create();
    return new;
}

void preorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d\t",root->data);
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
    printf("%d\t",root->data);
}

struct node *search(struct node *root,int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    else if (root->data < key)
    {
        return search(root->right,key);
    }
    return search(root->left,key);
}

