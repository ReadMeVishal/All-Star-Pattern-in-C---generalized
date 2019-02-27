#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows*2;j++)
            if(j>=rows+1-i&&j<=(rows*2)+1-i)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}

