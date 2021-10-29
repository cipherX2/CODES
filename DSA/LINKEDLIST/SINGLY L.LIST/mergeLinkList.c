#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start1 = NULL;
struct node *start2 = NULL;
struct node *create(struct node *);
void display(struct node *);
void merge(struct node *, struct node *);

int main()
{

    start1 = create(start1);
    printf("\n 1st list --->\t");
    display(start1);

    start2 = create(start2);
    printf("\n 2nd list --->\t");
    display(start2);

    merge(start1, start2);
    printf("\n Merged list --->\t");
    display(start1);
    return 0;
}
struct node *create(struct node *s)
{
    struct node *new, *last;
    char ch;
    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        if (new == NULL)
            printf("\n Space is not allocated.");
        else
        {
            printf("\n Enter value of node :\t");
            scanf("%d", &new->info);
            if (s == NULL)
            {
                new->link = NULL;
                last = s = new;
            }
            else
            {
                new->link = NULL;
                last->link = new;
                last = new;
            }
        }
        printf("\n more???\t");
        scanf(" %c", &ch );
    } while (ch == 'y' || ch == 'Y');
    return s;
}
void merge(struct node *s1, struct node *s2)
{
    struct node *t;
    t = s1;
    while (t->link != NULL)
        t = t->link;
    t->link = s2;
}
void display(struct node *s)
{
    struct node *temp;
    if (s == NULL)
        printf("\n list is empty");
    else
    {
        temp = s;
        while (temp != NULL)
        {
            printf("%d\t", temp->info);
            temp = temp->link;
        }
    }
}
