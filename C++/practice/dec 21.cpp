#include<stdio.h>
int main()
{
	/*int a=1,c,n;
	printf("Table ");
	scanf("%d",&n);
	printf("Till ");
	scanf("%d",&c);
	do{
		printf("%d\n",a*n);
		a+=1;
	}while (a<c);*/
	int a=1,b=1;
	do{ a=1;
		do{
		  	printf("*");
		  	a+=1;
		}while(a<b);
		b+=1;
		printf("\n");
	}while(b<4);
    return 0;
}
