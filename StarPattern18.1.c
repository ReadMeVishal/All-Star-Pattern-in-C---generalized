#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows,n;
    char k;
    printf("Enter No. of rows(Recommended range = 1 to 26) :- ");
    scanf("%d",&rows);
    n=(rows*2)-1;
    for(i=1;i<=rows;i++)
    {
        k='A';
        for(j=1;j<=n;j++)
        {
            if(j>=rows+1-i&&j<=rows-1+i)
                {
                    printf("%c",k);
                    j<rows?k++:k--;
                }
            else
                printf(" ");
        }
        printf("\n");
    }
}

