//#include<stdio.h>
//#include<string.h>
/*int mul(int a,int b){
		return a*b;
}
int main()
{   /*int a=1;
	a=++a + a++ + ++a ;//+ a++;// + ++a + a++;
	printf("%d %d %d %d",++a,++a,a++,a++);//
	printf("	%d",a);
	return 0;
	int a;
	scanf("%d",&a);
	printf("%d %d",a,&a);
	char a[64];
	scanf("%s",a);
	printf("%s",a);
	printf(" hai ");
	char b[64];
	if (1)
		gets(b);
	int na=0;
	printf("%d%s",na,b);
}*/
/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    // char a[64];
    // scanf("%[^\n]s",a);
    FILE *ptr=fopen("input.txt","w");
    char a[64];
    scanf("%[^\n]s",a);
    // gets(a);
    fprintf(ptr,"%s",a);
    fclose(ptr);
    ptr=fopen("input.txt","r+");
    char c;
    while ((c=fgetc(ptr))!=EOF){
        // if ((c==EOF)!=EOF){
        //     break;
        // }
        printf("%c",toupper(c));
    }
    
}*/
/*#include<stdio.h>
int main(){
	int principle,rate_of_intrest,no_of_years;
	scanf("%d %d %d",&principle,&rate_of_intrest,&no_of_years);
	printf("Intrest is (%d)",(principle*rate_of_intrest*no_of_years)/100);
}
#include<stdio.h>
int main(){
	char a='f';
	printf("%c",a=a ^ " ");
}*/
/*#include<stdio.h>
int main()
{
	char *a="hello";
	printf("%c",*a);
}*/
/*#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[n][16];
	for (int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for (int i=0;i<n;i++){
		printf("%s ",a[i]);
	}
}*/
/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int space=n;
    char ch='A',Ch='a';
    for (int i=1;i<=n;i++){
        for (int j=1;j<space;j++){
            printf(" ");
        }
        if (i%2==0){
        	for (int j=ch;j>='A';j--){			
            	printf("%c",j);
        	}
        	for (int j='B';j<=ch;j++){
            	printf("%c",j);
        	}
		}
        else{
        	for (int j=Ch;j>='a';j--){
            	printf("%c",j);
        	}
        	for (int j='b';j<=Ch;j++){
            	printf("%c",j);
			}
		}
        printf("\n");
        ch++;
    	Ch++;
        space--;
    }
    
    return 0;
}*/







