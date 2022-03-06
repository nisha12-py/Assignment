#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;

struct lib
{
    int bk_no, bk_pr;
    char bk_ar[20], bk_tl[20];;
    int flag;
}lib1[20];

void bookInfo()
{
    // int n;
    printf("\n****Welcome to Library****");
    printf("\nEnter the number of books you want to enter - ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("\nEnter book information - ");
        printf("\n\nEnter book name - ");
        scanf("%s", lib1[i].bk_tl);
        printf("\nEnter author name - ");
        scanf("%s", lib1[i].bk_ar);
        printf("\nEnter book price - ");
        scanf("%d", &lib1[i].bk_pr);
        printf("\nEnter book number - ");
        scanf("%d", &lib1[i].bk_no);
    }
    printf("\n****DONE****");
}


void authorBook()
{
    char ar[20];
    printf("\nEnter author name  - ");
    scanf("%s", ar);
    for(int i =1; i<=n; i++)
    {
        if(strcmp(ar, lib1[i].bk_ar)==0)
        {
            printf("\n%d.Book name %s\n", i, lib1[i].bk_tl);
        }
    }
}

void specBook()
{
    int acc_no;
    printf("\nEnter book number  - ");
    scanf("%d", &acc_no);
    for(int i =1; i<=n; i++)
    {
        if(acc_no == lib1[i].bk_no)
        {
            printf("\n         Book name %s", lib1[i].bk_tl);
            // printf("\n\tAuthor name - %s", lib1[i].bk_ar);
            // printf("\n\tBook price - %d",lib1[i].bk_pr);
        }
    }
}

void count()
{
    printf("\nTotal number(s) of book(s) is/are - %d", n);
}

void listBook()
{
    for(int i=1;i<=n;i++)
    {
        printf("\n%d.      Book name %s", i, lib1[i].bk_tl);
        printf("\n\tAuthor name - %s", lib1[i].bk_ar);
        printf("\n\tBook price - %d",lib1[i].bk_pr);
    }
}
void displayBook()
{
    printf("\nBooks are - ");
    for(int i=1; i<=n; i++)
    {
        printf("\n      Book name %s", lib1[i].bk_tl);
        printf("\n\tAuthor name - %s", lib1[i].bk_ar);
        printf("\n\tBook price - %d",lib1[i].bk_pr);
    }
}

int main()
{
    while(1)
    {
        int ch;
        printf("\n1. Add book information \n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");
        printf("\nSelect ur ch - ");
        scanf("%d", &ch);
        if(ch<=7)
        {
            switch(ch)
            {
                case 1:
                    bookInfo();
                    break;
            
                case 2:
                    displayBook();
                    break;
                case 3:
                    authorBook();
                    break;
                case 4:
                    specBook();
                    break;
                case 5:
                    count();
                    break;
                case 6:
                    listBook();
                    break;
                case 7:
                    exit(0);
                    break;
            }
        }
    }
}