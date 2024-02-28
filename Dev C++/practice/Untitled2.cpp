#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
	char a[x];
	scanf("%s",&a);
	printf("Your name is %s",a);
	char c;
	scanf("%c",&c);
	int y=0;
	for ( int i=0;i<x;i++)
	{
		if (c==a[i])
		{
		   y+=1;
		}
	}
	printf("%d Times %c is present in %s",y,c,a);
	return 0;
}
