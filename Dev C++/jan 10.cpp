#include<stdio.h>
int main()
{
    int a,b,n;

    scanf("%d%d%d",&a,&b,&n);

    for(;n>0;n--)
    {
        if (n%2!=0)	b*=2;
        else	a*=2;
    }
    
    printf("%d",(a+b));
    return 0;
}
