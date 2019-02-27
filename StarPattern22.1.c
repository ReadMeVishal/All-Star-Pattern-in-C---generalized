#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x,rows;
    printf("Enter No. of rows :- ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        x=1;
        for(j=1;j<=rows;j++)
        {
            if(j<=i)
            {
                printf("%d",x);
                x=1-x;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

