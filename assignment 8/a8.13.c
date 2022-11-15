#include<stdio.h>
int main()
{
    int i,j;
    char c;
    for(i=1;i<=7;i++)
    {
        for(j=1,c='A';j<=13;j++)
        {
            if(((j>=1)&&(j<=8-i))||(j>=6+i))
            {
                printf("%c",c);
                if(j<=6)
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
                  if(j==7)
                  {
                      c--;
                  }

            }


        }
        printf("\n");
    }
    return 0;
}
