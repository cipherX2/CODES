#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} llist;

llist *head = NULL;
llist *temp;

void create();
void display();
void deletionAtBeginning();
void deletionAtPosition();
void deletionAtEnd();

void main()
{
    int value;
    while (1)
    {
        printf("\nLIST OF OPERATIONS\n");
        printf("----------------------------------------------------------------------\n");
        printf("1.CREATE \n2.DISPLAY \n3.Deletion At Beginning \n4.Deletion At Position \n5.Deletion At End \n6.Exit \n");
        printf("Enter: ");
        scanf("%d", &value);
        switch (value)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            deletionAtBeginning();
            break;
        case 4:
            deletionAtPosition();
            break;
        case 5:
            deletionAtEnd();
            break;
        case 6:
            exit(0);
        default:
            break;
        }
    }
}

void create()
{
    int num, choice;
    llist *new;
    choice = 1;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("\nEnter data: ");
        scanf("%d", &num);
        new->data = num;
        new->next = NULL;
        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
        printf("\nWant to continue (0,1): ");
        scanf("%d", &choice);
    }
}

void deletionAtBeginning()
{
    temp = head;
    head = head->next;
    free(temp);
}

void deletionAtPosition()
{
    int pos,i=1;
    llist *nextnode;
    temp = head;
    printf("Enter the position: ");
    scanf("%d",&pos);
    while (i<pos-1)
    {
        temp = temp->next;
        ++i;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}


void deletionAtEnd()
{
    llist *prevnode;
    temp = head;
    while (temp->next != NULL)
    {
        //Moving the pointers until temp->next!=NULL
        prevnode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = NULL;
        // free(temp);
    }
    else
    {
        prevnode->next = NULL;
        // free(temp);
    }
    free(temp);
}

void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}