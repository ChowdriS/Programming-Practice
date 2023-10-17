#include <stdio.h>
int main()
{
	int n,i,temp;
	scanf("%d",&n);
	int a[n],*p;
	/*p=&a;
	for (i=0;i<n-1;i++){
		if (*p[i]>*p[i+1]){
			temp=*p[i];
			*p[i+1]=*p[i];
			*p[i]=temp;
		}
	}
	for (i=0;i<n;i++){
		printf("%d ",*p[i]);
	}*/
	a[2]=0;
	printf("%d",a[2]);
}
