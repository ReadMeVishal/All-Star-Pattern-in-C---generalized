#include<stdio.h>
#include<conio.h>
// WOrking...
int main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        k=2*i-1;
        for(j=1;j<=9;j++)
        {
            if(j<=2*i-1)
                if(j%2==0)
                    printf("*");
                else
                    printf("%d",k--);
            else
                printf(" ");
        }
        printf("\n");
    }
}
