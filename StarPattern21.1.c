#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=5;i++)
    {
        x=49; // Ascii of 1.
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%c",x);
                x++;
                if(j==5)
                    x=65; //Ascii of A.
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

