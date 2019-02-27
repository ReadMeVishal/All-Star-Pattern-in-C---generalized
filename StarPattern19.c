#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x=0;
    char y;
    for(i=1;i<=4;i++)
    {
        x=1;
        y='A';
        for(j=1;j<=8;j++)
        {
            if(j>=5-i&&j<=4+i)
            {
                if(j<=4)
                {
                    printf("%c",y);
                    y++;
                }
                else if(j>=5)
                {
                    printf("%d",x);
                    x++;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
