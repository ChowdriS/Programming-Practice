#include<stdio.h>
int main()
{
	int mark[5],sum=0;//={1,2,3,5,4,3};
	
	for (int i=0;i<5;i++)
	{
		printf("Mark[%d]=",i);
		scanf("%d ",&mark[i]);
		sum+=mark[i];
	}
	/*for (int j=0;j<6;j++)
		sum+=mark[j];*/	
	printf("%d",sum);	
	return 0;
	
}
