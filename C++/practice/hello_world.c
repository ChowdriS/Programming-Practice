// /*#include<stdio.h>
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
// }*/
// // #include<stdio.h>
// // #include<string.h>
// // struct student{
// //     int total;
// //     char name[64];
// // };
// // int main(){
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
//     }*/
//     // int n;
//     // scanf("%d",&n);
//     /*for (int i=0;i<n;i++){
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
//     // for (int i=1;i<=n;i++){
//     //     for (int j=5;j>=i;j--){
//     //         printf(" ");
//     //     }
//     //     for (int j=1;j<=i;j++){
//     //         printf("%d ",j);
//     //     }
//     //     printf("\n");
//     // }
//     /*for (int i=1;i<=n;i++){
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
//     }*/
// // }
// /*#include<stdio.h>
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
// }*/
// /*#include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char a[]="str";
    
// }*/
// /*#include<stdio.h>
// int main(){
//     FILE *fp=fopen("data.txt","r");
//     char ch;
//     int count=0;
//     while(ch=fgetc(fp)!=EOF){
//         count++;
//     }
//     // [0..24]
//     printf("COUNT %d\n",count);
//     // [1, count - 1]
//     // - (i + 2)
//     // -1..count-1]
//     /*fpos_t pos;
//     for(int i = -1; i >= -count - 1; i--){
//         fseek(fp, i  ,SEEK_END);
//         fgetpos(fp, &pos);
//         printf("%c i %d pos %d seeked %d\n",fgetc(fp), i, pos, - i - 1);
//     }
//     for (int i=count;i>=0;i--){
//         fseek(fp,i,SEEK_SET);
//         printf("%c",fgetc(fp));
//     }}/*
//     #define a 32
//     printf("%d",12);
// }*
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// }*head;
// void create_node(int n){
//     struct node *new_node,*tmp;
//     head=(struct node*)malloc(sizeof(struct node));
//     int num;
//     scanf("%d",&num);
//     head->data=num;
//     head->next=NULL;
//     tmp=head;
//     for (int i=2;i<=n;i++){
//         new_node=(struct node*)malloc(sizeof(struct node));
//         scanf("%d",&num);
//         new_node->data=num;
//         new_node->next=NULL;
//         tmp->next=new_node;
//         tmp=tmp->next;
//     }
    
// }

// /*void reverse_node(){
//     struct node *pre_ptr,*cur_ptr;
//     pre_ptr=head;
//     head=head->next;
//     cur_ptr=head;
//     pre_ptr->next=NULL;
//     while(head!=NULL){
//         head=head->next;
//         cur_ptr->next=pre_ptr;
//         pre_ptr=cur_ptr;
//         cur_ptr=head;
//     }
//     head=pre_ptr;
// }*/

// /*void reverse_node(){
//     struct node *pre_node,*cur_node;
//     pre_node=head;
//     cur_node=head->next;
//     //printf("rev");
//     head=head->next;
//     pre_node->next=NULL;
//     while(head!=NULL){
//         head=head->next;
//         cur_node->next=pre_node;
//         pre_node=cur_node;
//         //head=head->next;
//         cur_node=head;
//     }
//     head=pre_node;
// }

// void delete_first_node(){
//     struct node *tmp;
//     tmp=head;
//     tmp=tmp->next;
//     free(head);
//     head=tmp;
// }

// void delete_last_node(){
//     struct node *tmp,*pre_node;
//     tmp=head;
//     if (tmp==NULL){
//         printf("EMPTY");
//         return;
//     }
//     else if (tmp->next=NULL){
//         printf("ONY ONE NODE\n");
//         free(head);
//         free(tmp);
//     }
//     else{
//         pre_node=head;
//         tmp=tmp->next;
//         while(tmp->next==NULL){
//             tmp=tmp->next;
//             pre_node=pre_node->next;
//         }
//         pre_node->next=NULL;
//     }
// }

// void display(){
//     struct node *new_node;
//     //printf("\nhei\n");
//     new_node=(struct node*)malloc(sizeof(struct node));
//     new_node=head;
//     //printf("DISPLAY\n");
//     if (new_node==NULL){
//         printf("Empty;");
//         return;
//     }
//     while(new_node!=NULL){
//         printf("%d ",new_node->data);
//         new_node=new_node->next;
//     }
//     //printf("%d",new_node->data);
// }

// int main(){
//     struct name *one;
//     struct name *two;
//     struct name *three;
//     one=(struct name*)malloc(sizeof(struct name));
//     two=(struct name*)malloc(sizeof(struct name));
//     three=(struct name*)malloc(sizeof(struct name));
    
//     one->a=5;
//     two->a=10;
//     three->a=15;
//     input(one);
//     input(two);
//     input(three);
    
//     struct name *head;
//     head=one;

//     one->h=two;
//     two->h=three;
//     three->h=NULL;

//     struct name *ptr;
//     ptr=head;
//     printf("-->");
//     while(ptr!=NULL){
//         printf("%d ",ptr->a);
//         ptr=ptr->h;
//     }*/
//     /*struct name *head=(struct name*)malloc(sizeof(struct name));
//     struct name *tmp =(struct name*)malloc(sizeof(struct name));
//     struct name *cur=(struct name*)malloc(sizeof(struct name));
//     /*int n;
//     scanf("%d",&n);
//     head->data=15;
//     head->next=NULL;
//     head=tmp;
//     for (int i=1;i<3;i++){
//         //scanf("%d",&cur->data);
//         cur->data=1+i;
//         tmp->next=cur;
//         tmp=cur;
//     }
//     tmp->next=NULL;
//     struct name *ptr=(struct name *)malloc(sizeof(struct name));
//     ptr=head;
//     while(ptr->next!=NULL){
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }
//     /*int  sum=1;
//     for (double i=2;i<=100;i+=2){
//         printf("%d ",sum=sum*i);
//     }
//     printf("\n-%d",sum);
//     int n;
//     scanf("%d",&n);
//     create_node(n);
//     //printf("fdifnsd");
//     display();
//     printf(" end\n");
//     reverse_node();
//     display();
//     printf(" END-reverse\n");
//     delete_first_node();
//     display();
//     printf(" END - First delete\n");
//     delete_last_node();
//     display();
//     printf(" END - Last delete\n");
// }*/

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// #define Node(temp) temp=(struct node*)malloc(sizeof(struct node));

// struct node{
//     int data;
//     struct node* next;
// }*head=NULL,*head1=NULL;

// void insert_first(int a){
//     struct node* temp;
//     Node(temp);
//     temp->data=a;
//     if(head==NULL){
//         head=temp;
//     }
//     else{
//         temp->next=head;
//         head=temp;
//     }
// }
// void insert(int a){
//     struct node* temp;
//     Node(temp);
//     temp->data=a;
//     //printf("inside il");
//     if(head==NULL){
//         head=temp;
//     }
//     else{
//         struct node* temp1=head;
//         while(temp1->next!=NULL){
//              temp1=temp1->next;
//         }
//         temp1->next=temp;
//     }
// }

// void insert_last1(int a){
//     struct node* temp;
//     Node(temp);
//     temp->data=a;
//     //printf("inside il");
//     if(head1==NULL){
//         head1=temp;
//     }
//     else{
//         struct node* temp1=head1;
//         while(temp1->next!=NULL){
//              temp1=temp1->next;
//         }
//         temp1->next=temp;
//     }
// }
// void insert_first1(int a){
//     struct node* temp;
//     Node(temp);
//     temp->data=a;
//     if(head1==NULL){
//         head1=temp;
//     }
//     else{
//         temp->next=head1;
//         head1=temp;
//     }
// }

// int createnode(){
//     int count=0;
//     //printf("inside cn\n");
//     while(1){
//         int data;
//         scanf("%d",&data);
//         if(data<=0){
//             break;
//         }
//         else{
//             insert_last1(data);
//             //printf("inside else\n");
//             count++;
//         }
//     }
//     return count;
// }

// void display(){
//     struct node* temp=head;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }

// int main() {
//     int n=createnode();
//     int c;
//     scanf("%d",&c);
//     //printf("%d",c);
//     char name[c][32];
//     for(int i=0;i<c;i++){
//         scanf("%s",name[i]);
//     }
//     struct node* temp=head1;
    
//     // print("%c",name[i][count])
//     // insert_last(temp->data);
//     // insert_last(temp->next->next->next->next->data);
//     for(int i=0;i<c;i++){
//         int count=strlen(name[i])-1;
//         //printf("%c",name[i][count]);
//         if(( (int)name[i][count] )%2==0){
//             insert_first(temp->data);
//             //printf("if\n");
//         }
//         else{
//             insert(temp->data);
//             //printf("if\n");
//         }
//         temp=temp->next;
//     }
//     display();
// }




#include<stdio.h>
int main(){
    printf("Hello World");
}