#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the row and column :");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],c[m][n],d[m][n];
	int i,j;
	printf("Enter the value of 1st matrix :");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\nEnter the value of 2nd matrix :");
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	printf("\nEnter the value of 3rd matrix :");
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&c[i][j]);
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			d[i][j]=a[i][j]*b[i][j]*c[i][j];
	printf("\nThe Multiplied matrix :\n");
	for (int i=0;i<m;i++)
		{
			for (int j=0;j<n;j++)
				printf("%d\t",d[i][j]);
			printf("\n");
		}
	return 0;
			
}
