#include<stdio.h>
int main()
{
    int i,j,c;
    for(i=1;i<=4;i++)
    {
        for(j=1,c=1;j<=8-i;j++)
        {
            if(j>=i)
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
            }
        }
        printf("\n");
    }
    return 0;
}

