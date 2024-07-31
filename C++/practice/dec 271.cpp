#include <stdio.h>
int main()
{
    int y=0;
    //printf("Enter the no of letters ");
    //scanf("%d",&x);
	char a[10],v;
    printf("Enter the character ");
    scanf("%c",&v);
	printf("Enter the string ");
	scanf("%s",&a);
	printf("Your name is %s",a);
	for ( int i=0;a[i]!='\0';i++)
	{
		if (v==a[i])
		{
		   y+=1;
		}
	}
	printf("\n%d Times h is present in %s",y,a);
	
}

