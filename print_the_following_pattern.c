#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(j=n;j>0;j--)
    {
        for(i=1;i<=j;i++)
        {
            printf("%d",i);
        }
    printf("
");
    }
}
