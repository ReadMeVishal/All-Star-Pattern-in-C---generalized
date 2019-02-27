#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        if(j>=6-i&&j<=4+i)
            printf("*");
        else
            printf(" ");
    }
}
