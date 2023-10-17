#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int cmp(char a[100])
{	
	char b[100]="Yes";
	int count=0;
	for (int i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
			count++;
	}
	if(0==count)
		return 1;
	return 0;
}
int main()
{
	int a,b,c;
	repeatu:
	printf("Enter values : ");
	scanf("%d %d",&a,&b);
	char ch[100];
	int d=0;
	redo:
	do{
	if(d>0)	goto repeatu;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				printf("%d",sum(a,b));
				break;
			}
		case 2:
			{
				printf("%d",sub(a,b));
				break;
			}
		case 3:
			{
				printf("%d",mul(a,b));
				break;
			}
		case 4:
			{
				printf("%d",div(a,b));
				break;
			}
		default:
			{
				printf("Invalid Choice..Give again\n");
				goto redo;
			}
	}
	d++;
	printf("\nDo u want to continue?If yes Type \"Yes\"");
	scanf("%s",&ch);
	}while(cmp(ch));
    return 0;
}
