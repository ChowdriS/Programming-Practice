#include<stdio.h>
#include<string.h>
int search(int *a,int n,int search){
	for (int i=0;i<n;i++){
		if (a[i]==search){
			return i;
		}
	}
}
#define size1 sizeof(str)/sizeof(str[0])
void replace(char *str,int size,char p){
	for (int i=0;i<size;i++){
		if (str[i]=='a'){
			str[i]=p;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	char str[64];
	scanf("%s",str);
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int size= size1;
	
	printf("len=%d",size);
	char replace1;
	scanf("%c",&replace1);
	replace(str,strlen(str),replace1);
	printf("%s",str);
	int s;
	scanf("%d",&s);
	printf("search is in index-%d",search(arr,n,s));
	
}
/*#include<stdio.h>
#define size sizeof(a)/sizeof(a[0])
int main(){
	int n;
	//scanf("%d",&n);
	int a[64];
	printf("%d",size);
}*/
