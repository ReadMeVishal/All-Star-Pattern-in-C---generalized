#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=6;i++)
    {
        x=1;
        for(j=1;j<=6;j++)
        {
            if(j<=i)
            {
                printf("%d",x);
                // x=1-x;
                if(x==1)
                    x=0;
                else
                    x=1;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
