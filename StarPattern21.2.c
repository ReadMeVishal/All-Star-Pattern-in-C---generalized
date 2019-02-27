#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x,rows;
    printf("Enter No. of rows(Recommended range 1 to 9) :- ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        x=49; // Ascii of 1.
        for(j=1;j<=(rows*2)-1;j++)
        {
            if(j>=rows+1-i&&j<=rows-1+i)
            {
                printf("%c",x);
                x++;
                if(j==rows)
                    x=65; //Ascii of A.
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


