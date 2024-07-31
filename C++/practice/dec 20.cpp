/*#include<stdio.h>
int main()
{
	/*int i,j,n;
	//scanf("%d",&n);
	for (i=1;i<5;i++)
	{   printf("\n");
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
	}
	for (i=3;i>0;i--)
	{   printf("\n");
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
	}
	return 0;
	int i,j;
	char a[5]=;
	
	for (i=1;i<3;i++)
	{   printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	}
	/*for (i=3;i>0;i--)
	{   printf("\n");
		for(;j<=i;j++)
		{
			printf(" * ");
		}
	}*/
	int i,j,k;
	//scanf("%d",&n);
	/*for (i=0;i<=5;i++)
	{  
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	printf("hello");
	return 0;
}
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		printf("%d",a[i]);
	}
	
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	char **a;
	a=(char**)malloc(sizeof(char*)*n);
	for (int i=0;i<n;i++){
		a[i]=(char*)malloc(sizeof(char)*64);
	}
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for (int i=0;i<n;i++){
		printf("%s ",a[i]);
	}
}

