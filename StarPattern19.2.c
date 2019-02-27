#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x,rows;
    printf("Enter No. of rows(Recommended range = 1 to 9) :- ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        x='A';
        for(j=1;j<=rows*2;j++)
        {
            if(j>=rows+1-i&&j<=rows+i)
            {
                if(j==rows+1)
                    x='1';
                printf("%c",x);
                x++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


