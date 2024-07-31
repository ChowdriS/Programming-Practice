#include<stdio.h>
void swap(float *a,float *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(){
	float a=10.5, b=45.8;
	printf("A=%f and B=%f\n",a,b);
	swap(&a,&b);
	printf("A=%f and B=%f",a,b);
}
