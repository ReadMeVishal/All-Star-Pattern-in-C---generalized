#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows;
    char k;
    printf("Enter No. of rows(Recommended range 1 to 26) :- ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        k=64+i;
        for(j=1;j<=rows;j++)
        {
            if(j<=i)
            {
                printf("%c",k--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

