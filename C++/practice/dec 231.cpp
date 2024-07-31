#include<stdio.h>
int main()
{
	/*int a[53][3];
	printf("matrics:");
	for(int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(int k=0;k<3;k++)
		for (int l=0;l<3;l++)
			printf("%d\t",a[k][l]);	
			printf("\n");*/
	int n;
	printf("Enter the no of values in array:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The array given is ");
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{	a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
			/*if (j==n-1)
				break;*/
		}
	}
	printf("\nSorted array:");
	for (int i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}
