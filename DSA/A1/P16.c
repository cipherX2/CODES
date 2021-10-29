// triplet formation
#include<stdio.h>

void input(int [][10],int ,int);
void create_triplet(int [][10],int, int,int [][3]);
void display(int [][3]);

int main()
{
    int s[10][10],r,c;
    int t[20][3];

    printf("\n enter the no of the rows of the sparse matrix");
    scanf("%d",&r);
    printf("\n enter the no of column of the matrix");
    scanf("%d",&c);

    input(s,r,c);
    create_triplet(s,r,c,t);
    display(t);

    return 0;
}

void input(int s[][10],int r,int c)
{
    int i,j;
    printf("\n enter the elements of the matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
}

void create_triplet(int s[][10],int r,int c,int t[][3])
{
    int i,j,k;
    k=1;
    t[0][0] = r;
    t[0][1] = c;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[i][j] != 0)
            {
                t[k][0] = i;
                t[k][1] = j;
                t[k][2] = s[i][j];
                k++;
            }
        }
    }

    t[0][2] = k-1;
}

void display(int t[][3])
{
    int i,r;
    printf("\n formation of the triplet matrix: \n");
    for(i=0;i<r;i++)
    {
        printf("%d\t%d\t%d\t\n",t[i][0],t[i][1],t[i][2]);
    }
}
