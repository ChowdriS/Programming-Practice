#include <stdio.h>
#include<string.h>
int main(){
    // int n;
    // scanf("%d",&n);
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=0;i<n/2;i++)
    // {
    //     for (int j=0;j<n/2;j++){
    //         printf(" ");
    //     }
    //     printf("*\n");
    // }

    // char *a[]={"hydrabad","chennai","bangalore","pune"};
    // printf("%s %p\n",a,a);
    // printf("%s %p\n",a+1,a+1);
    // printf("%s %p\n",*(a+1),*(a+1));
    // printf("%s %p\n",*(a+1)+2,*(a+1)+2);
    // // printf("%s %p\n",*(*(a+1)+2),*(*(a+1)+2));
    // printf("%s %p\n",a[3]+2,a[3]+2);

    // printf("%s %p\n",a);
    // printf("%s %p\n",a[0]);
    // printf("%s %p\n",*a);
    // // printf("%s %p\n",*++a);
    // printf("%s %p\n",++*a);
    // printf("%s %p\n",a[1]+2);
    // char a[]="Hello",
    // b[]="World";
    // for(int i=0;i<strlen(a);i++){
    //     b[i]=a[i];
    // }
    // printf("%s",b);

    char s[]="he";
    char s1[]="he";
    char *a=s;
    char *b=s1;
    while(*a) a=a+1;
    // printf("%s  0\n",*b);
    a=a-1;
    while(*b){
        *b=*a;
        //printf("%c",*a);
        a=a-1;
        b=b+1;
    }
    *b='\0';
    printf("%s",s1);



}