#include<stdio.h>
int sum(int a,int n){
	if (n==0)
		return 1;
	return (a*sum(a,n-1));
}
int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	printf("%d",sum(a,n));
	return 5644;
}
