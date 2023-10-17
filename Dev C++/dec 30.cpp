#include<stdio.h>
#include<string.h>
int main()
{
    char name[100],rev[100]="  ";
    gets(name);
    int i=0;
    char dc;
    strcpy(rev,name);
    for(int c=strlen(rev)-1;i<c;c--)
    {
        dc=rev[i];
        rev[i]=rev[c];
        rev[c]=dc;
        i++;
    }
    //strrev(rev);
    puts(rev);
    //printf("%s\n",rev);
    if(!strcmp(rev,name))
    	printf("Its a pallindrome");
    else
    	printf("Its not a pallindrome");
    /*int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
        printf("%d",a);
    else if (b>a&&b>c)
        printf("%d",b);
    else if (c>a&&c>b)
        printf("%d",c);
    else
        printf("Invalid");*/
    return 0;
}
