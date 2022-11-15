#include<stdio.h>
int main()
{
    int i,j,c;
    for(i=1;i<=4;i++)
    {
        for(j=1,c=1;j<=4+i;j++)
        {
            if(j>=6-i)
            {

                printf("%d",c);
                if(j<=4)
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
            }
        }
        printf("\n");
    }
    return 0;
}

