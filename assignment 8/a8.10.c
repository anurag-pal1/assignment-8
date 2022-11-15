#include<stdio.h>
int main()
{
    int i,j,c;
    for(i=1;i<=4;i++)
    {
        for(j=1,c=1;j<=7;j++)
        {
            if(((j>=1)&&(j<=5-i))||(j>=3+i))
            {
                printf("%d",c);
                if(j<4)
                {
                    c++;
                }
                else
                {
                    c--;
                }
            }
            else
            {
                printf(" ");
                if(j==4)
                {
                    c--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}

