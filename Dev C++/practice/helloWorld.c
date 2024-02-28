#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define Node(temp) temp=(struct node*)malloc(sizeof(struct node));

struct node{
    int data;
    struct node* next;
}*head=NULL,*head1=NULL;

void insert_first(int a){
    struct node* temp;
    Node(temp);
    temp->data=a;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void insert(int a){
    struct node* temp;
    Node(temp);
    temp->data=a;
    //printf("inside il");
    if(head==NULL){
        head=temp;
    }
    else{
        struct node* temp1=head;
        while(temp1->next!=NULL){
             temp1=temp1->next;
        }
        temp1->next=temp;
    }
}

void insert_last1(int a){
    struct node* temp;
    Node(temp);
    temp->data=a;
    //printf("inside il");
    if(head1==NULL){
        head1=temp;
    }
    else{
        struct node* temp1=head1;
        while(temp1->next!=NULL){
             temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void insert_first1(int a){
    struct node* temp;
    Node(temp);
    temp->data=a;
    if(head1==NULL){
        head1=temp;
    }
    else{
        temp->next=head1;
        head1=temp;
    }
}

int createnode(){
    int count=0;
    //printf("inside cn\n");
    while(1){
        int data;
        scanf("%d",&data);
        if(data<=0){
            break;
        }
        else{
            insert_last1(data);
            //printf("inside else\n");
            count++;
        }
    }
    return count;
}

void display(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    int n=createnode();
    int c;
    scanf("%d",&c);
    //printf("%d",c);
    char name[c][32];
    for(int i=0;i<c;i++){
        scanf("%s",name[i]);
    }
    struct node* temp=head1;
    
    // print("%c",name[i][count])
    // insert_last(temp->data);
    // insert_last(temp->next->next->next->next->data);
    for(int i=0;i<c;i++){
        int count=strlen(name[i])-1;
        //printf("%c",name[i][count]);
        if(( (int)name[i][count] )%2==0){
            insert_first(temp->data);
            //printf("if\n");
        }
        else{
            insert(temp->data);
            //printf("if\n");
        }
        temp=temp->next;
    }
    display();
}
