#include<stdio.h>
int main()
{
    int l,b,w,c,area,Tot_Cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=w+w||w+w>=b)
    {
        printf("Impossible");
}
    else
    {
        area=(l*b)-((l-2*w)*(b-2*w));
        Tot_Cost=area*c;
        printf("%d",Tot_Cost);
        
    }
    return 0;
    
}