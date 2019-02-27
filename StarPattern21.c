#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    char y;
    for(i=1;i<=5;i++)
    {
        x=1;
        y='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                if(j<=5)
                {
                    printf("%d",x);
                    x++;
                }
                else if(j>=6)
                {
                    printf("%c",y);
                    y++;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
