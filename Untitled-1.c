#include<stdio.h>
int main()
{
    int i,j;
    int n=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",n--);
        
    }
    printf("\n");
    }
    return 0;
}