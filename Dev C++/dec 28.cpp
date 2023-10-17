#include<stdio.h>
#include<string.h>
#include<conio.h>
int  main()
{
	int x=0;
	char name[100];
	//scanf("%s",&name);
	gets(name);
	for (int i=0;name[i]!='\0';i++)
		x++;
	printf("%d",x);
	return 0;
	/*#include<string.h>
    char a[100];
    char rev[100];
    scanf("%s ",&a);
    int j=strlen(a)-1;*/
    /*for(int i=0;a[i]!='\0';i++)
    {
        rev=strapend(rev[j],a[i]);
        j--;
    }
    printf("%s",rev);*/
    /*int a,b,rev;
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        rev=(rev*10)+b;
        a=a/10;
    }
    printf("%d",rev);
    return 0;*/
}
}
