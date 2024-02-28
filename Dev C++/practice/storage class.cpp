#include<stdio.h>
int main()
{
	auto int a=6,b=5;
	{
		auto int x=0;
		printf("%d",x);
	}
	printf("\n%d %d",a,b);
}
