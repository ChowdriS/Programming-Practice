// #include<stdio.h>
// #include<stdlib.h>
// void swap(int *a,int* b){
//     *a^=*b;*b=*a^*b;*a^=*b;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",(a+i));
//     }
//     for (int i=0,j=n-1;i<n/2;i++,j--){
//         swap((a+i),(a+j));
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }
// /*#include<stdio.h>
// #include<string.h>
// struct student{
//     int total;
//     char name[64];
// };
// int main(){
//     /*int n;
//     scanf("%d",&n);
//     struct student s[n];
//     for (int i=0;i<n;i++){
//         scanf("%d %s",&s[i].total,s[i].name);
//         //printf("%d %s",s[i].total,s[i].name);
//     }
//     for (int i=0;i<n;i++){
//         printf("\n%s-%d\t",s[i].name,s[i].total);
//     }*/
//     /*int n;
//     scanf("%d",&n);
//     int space=n;
//     char ch='A',Ch='a';
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<space;j++){
//             printf(" ");
//         }
//         if (i%2==0){
//         	for (int j=ch;j>='A';j--){			
//             	printf("%c",j);
//         	}
//         	for (int j='B';j<=ch;j++){
//             	printf("%c",j);
//         	}
// 		}
//         else{
//         	for (int j=Ch;j>='a';j--){
//             	printf("%c",j);
//         	}
//         	for (int j='b';j<=Ch;j++){
//             	printf("%c",j);
// 			}
// 		}
//         printf("\n");
//         ch++;
//     	Ch++;
//         space--;
//     }
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             if (i==0||i==n-1){
//                 printf("*  ");
//             }
//             else{
//                 if (j==0||j==n-1){
//                     printf("*  ");
//                     continue;
//                 }
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }*/
//     /*for (int i=0;i<n;i++){
//         for (int j=0;j<=i;j++){
//             if (i==0||i==n-1){
//                 printf("* ");
//             }
//             else{
//                 if (j==0||j==i){
//                     printf("* ");
//                 }
//                 else{
//                     printf("  ");
//                 }
//             }
//         }
//         printf("\n");
//     }*/
//     /*for (int i=0;i<n+1;i++){
//         for (int j=0;j<=i;j++){
//             printf("  ");
//         }
//         for (int j=0;i+j<=5;j++){
//             //if (i==0||i==n-1){
//                 printf("*   ");
//             //}
//             //else{
//             //   printf("    ");
//             //}
//         }
//         printf("\n");
//     }*/
//     /*for (int i=1;i<=n;i++){
//         for (int j=5;j>=i;j--){
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     for (int i=1;i<=n;i++){
//         for (int j=5;j>=i;j--){
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++){
//             if (j==1||j==i){
//                 printf("1 ");
//             }
//             else{
//                 printf("%d ",i-1);
//             }
//         }
//         printf("\n");
//     }*/
//     /*char ch='A';
//     for (int i=0;i<n;i++){
//         for (int j=n-1;j>=i;j--){
//             printf(" ");
//         }
//         for (int j=0;j<=i;j++,ch++){
//             printf("%c ",ch);
//         }
//         printf("\n");
//     }
// }*/
// #include<stdio.h>
// struct dept{
//     int roll_no;
//     char name[64];
// };
// struct kec{
//     struct dept d;
// };
// int main(){
//     struct kec k;
//     scanf("%d %s",&k.d.roll_no,k.d.name);
//     printf("%d %s",k.d.roll_no,k.d.name);
// }

#include<stdio.h>
int main(){
    // int a=0;
    // int *p;
    // printf("%d %d",sizeof(a),sizeof(p));

    // int a[][4]={4,14,24,34,5,15,25,35,6,16,26,36};
    // int *p=a;
    // printf("%d %d",a[2],*(a+2));
    // int n;
    // scanf("%d",&n);
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         if(i==j||(i+j)==(n-1)){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    // printf("hi");
}


