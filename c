#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("enter teh num");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(k=i;k<n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=3;i>=0;i--)
    {
        for(j=1;j<=2*i;j++)
        {
            printf(" ");
        }
        for(k=i;k<n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
