#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} llist;

llist *head = NULL;

void create();
void display();
int search(int);

void main()
{
    int n, k;
    create();
    display();
    printf("Enter the element you want to search: ");
    scanf("%d", &n);
    k = search(n);
    if (k == -1)
    {
        printf("Element Not Found: ");
    }
    else
    {
        printf("Element found at %d position ", k);
    }
}

void create()
{
    int num, choice;
    llist *new, *temp;
    choice = 1;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("Enter value: ");
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

int search(int n)
{
    int i = 1;
    llist *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        exit(0);
    }
    else
    {
        while (ptr != NULL)
        {
            if (ptr->data == n)
            {
                return i;
            }
            else
            {
                ptr = ptr->next;
                i++;
            }
        }
        if (ptr == NULL)
        {
            return -1;
        }
    }
}