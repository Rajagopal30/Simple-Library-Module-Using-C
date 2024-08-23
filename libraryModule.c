#include<stdio.h>
#include<string.h>
struct Library
{
    char bn[100],an[100];
    int  id,f;
}l[100];
int total=0,i,t=0;
void add()
{
    int n;
    printf("Enter no of books:");
    scanf("%d",&n);
    total+=n;
    for(i=t;i<total;i++)
    {
        printf("Enter Book Name:");
        scanf("%s",l[i].bn);
        printf("Enter Author Name:");
        scanf("%s",l[i].an);
        printf("Enter Book Id:");
        scanf("%d",&l[i].id);
        l[i].f=1;
    }
    t=i;
}
void view()
{
    int fl=1;
    for(i=0;i<total;i++)
    {
        if(l[i].f==1)
        {
            fl=0;
            printf("%s %s %d\n",l[i].bn,l[i].an,l[i].id);
        }
    }
    if(fl)
    printf("No Books found.....!\n");
}
void issue()
{
    char x[100];
    int tid,fl=1;
    printf("Enter the Book Name:");
    scanf("%s",x);
    printf("Enter Book id:");
    scanf("%d",&tid);
    for(i=0;i<total;i++)
    {
        if(tid==l[i].id&&!strcmp(x,l[i].bn)&&l[i].f==1)
        {
            l[i].f=0;
            fl=0;
        }
    }
    if(fl)
        printf("Invalid book id.....!\n");
    else
        printf("Issued Successfully\n");
}
void ret()
{
    char x[100];
    int tid,fl=1;
    printf("Enter the book name:");
    scanf("%s",x);
    printf("Enter book id:");
    scanf("%d",&tid);
    for(i=0;i<total;i++)
    {
        if(tid==l[i].id&&!strcmp(x,l[i].bn)&&l[i].f==0)
        {
            l[i].f=1;
            fl=0;
        }
    }
    if(fl)
    printf("invalid book id...!\n");
    else
    printf("Rerturn successfully\n");
}
void rep()
{
    char r[250];
    printf("Enter your report:");
    scanf("%s",r);
    printf("%s",r);
    
}
int main()
{
    int n;
    while(1)
    {
        printf("\n1.Add Book\n2.View books\n3.Issue books\n4.Return book\n5.Exit");
        scanf("%d",&n);
        if(n==1)
        add();
        else if(n==2)
        view();
        else if(n==3)
        issue();
        else if(n==4)
        ret();
        else if(n==5)
        {
            printf("Thanks for use...!");
            break;
        }
        else
        printf("Invalid option....!");
    }
}

