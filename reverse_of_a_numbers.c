


#include<stdio.h>
int main()
{
    int n,remainder;
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        remainder=n%10;
        printf("%d",remainder);
    }
    return 0;
} 