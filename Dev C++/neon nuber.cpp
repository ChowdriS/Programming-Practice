#include<stdio.h>
int sum(int);
int square(int a){
	return sum(a*a);
}
int neon(int a){
	if (a==square(a))
		return 1;
	else 
		return 0;
}
int sum(int a){
	int v=a,sum=0;
	while(a){
		v=a%10;
		sum+=v;
		a/=10;
	}
	return sum;
}
int main()
{
	int a;
	scanf("%d",&a);
	for ( int i=0;i<a+1;i++)
		printf("%d - %d\n",i,neon (a));
}
