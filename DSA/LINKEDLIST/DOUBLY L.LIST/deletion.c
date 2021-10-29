#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} llist;

llist *head = NULL;
llist *tail = NULL;

void create();
void display();
void deletionAtBeginning();
void deletionAtEnd();
void deletionAtPosition();
void deleteSpecificNodeWithValue();
int mycount();

void main()
{
    int choice;
    while (1)
    {
        printf("1.Create \n2.Display \n3.deletion At Beginning \n4.deletion At End \n5.deletion At Position \n6.Delete Specific Node With Value \n7.Exit \n");
        printf("\nYour Choice: ");
        scanf("%d", &choice);
        switch (choice)
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
            deletionAtEnd();
            break;
        case 5:
            deletionAtPosition();
            break;
        case 6:
            deleteSpecificNodeWithValue();
            break;
        case 7:
            printf("\nSuccessfully Kicked :)");
            exit(0);
        default:
            break;
        }
    }
}

void create()
{
    llist *new;
    int choice = 1;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("\nEnter data: ");
        scanf("%d", &new->data);
        new->next = NULL;
        new->prev = NULL;
        if (head == NULL)
        {
            head = tail = new;
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            tail = new;
        }
        printf("\nWant to continue(0,1): ");
        scanf("%d", &choice);
    }
}

void display()
{
    llist *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void deletionAtBeginning()
{
    llist *temp;
    if (head == NULL)
    {
        printf("\nList Empty");
        exit(0);
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}

void deletionAtEnd()
{
    llist *temp;
    if (head == NULL)
    {
        printf("\nList Empty");
        exit(0);
    }
    else
    {
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    }
}

void deletionAtPosition()
{
    int pos, count = 0;
    llist *temp;
    printf("Enter the position: ");
    scanf("%d", &pos);
    int i = 1;
    temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

void deleteSpecificNodeWithValue()
{
    int value;
    llist *temp;
    temp = head;
    printf("Enter the value: ");
    scanf("%d", &value);
    while (temp != NULL)
    {
        if (value == head->data)
        {
            temp = head;
            head = head->next;
            head->prev = NULL;
            free(temp);
            break;
        }

        if (value == tail->data)
        {
            temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            free(temp);
            break;
        }

        if (temp->data == value)
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    if (temp == NULL)
    {
        printf("\nNo such Value");
    }
}