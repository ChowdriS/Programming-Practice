#include<stdio.h>
int main()
{
	int a,b,c;	
	printf("1.Add\n2.Sub\n3.Multiphy\n4.Divide\n");
	printf("Enter your choice :");
	end :
	    scanf("%d",&c);
	char ch[20]="yes";
	do 
		{if (c>=5) 
		    {printf("invaild choice...\nEnter ur choice :");
		        goto end;}
		 printf("Enter the two numbers :-\n");
		 scanf("%d %d",&a,&b);
		switch(c)
		{
		case 1:{
			printf("%d\n",a+b);
			break;
		}
		case 2:{
			printf("%d\n",a-b);
			break;
		}
		case 3:{
			printf("%d\n",a*b);
			break;
		}
		case 4:{
			printf("%d\n",a/b);
			break;
		}}
		printf("Do u want to continue?");
		    scanf("%s",&ch);}
	while(ch=="yes"||ch=="Yes");
	return 0;
}
