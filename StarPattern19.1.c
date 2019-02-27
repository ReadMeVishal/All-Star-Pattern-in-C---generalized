#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=4;i++)
    {
        x='A';
        for(j=1;j<=8;j++)
        {
            if(j>=5-i&&j<=4+i)
            {
                if(j==5)
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

