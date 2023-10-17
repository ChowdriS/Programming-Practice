#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	printf("-->");
	scanf("%d",&n);
	int a[n][n],min[n],max[n];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for ( i=0;i<n;i++)
	{
		min[i]=a[i][0];
		max[i]=a[0][i];
    }
	for ( i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
				if (min[i]>a[i][j])	
					min[i]=a[i][j];
				if (max[j]<a[i][j])
					max[j]=a[i][j];
		}
	}
	for (i=0;i<n;i++)
	{
		for ( j=0;j<n;j++)
		{
			if (min[i]==a[i][j] && max[j]==a[i][j])
			{
				printf("%d ",a[i][j]);
				count++;
			}
		}
    }
    printf("\nNo of saddle point : %d",count);
    return 0;
	
		
			
}





