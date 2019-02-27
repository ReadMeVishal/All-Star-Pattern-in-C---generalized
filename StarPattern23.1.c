#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows,n;
    printf("Enter No. or rows :- ");
    scanf("%d",&rows);
    n=rows/2;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if((i==1||i==rows||j==1||j==rows)||(i>=n&&i<=rows-n&&j>=n&&j<=rows-n)&&(i==n||i==rows-n||j==n||j==rows-n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

