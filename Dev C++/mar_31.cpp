#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permutation(char *a, int start, int end)
{
	//printf("[%d-%d %s]\n", start, end, a);
	int i;
	if (start == end)
		printf("%s\n", a);
	else for (i = start; i <= end; i++) {
		//printf("[%d-%d %s]\n", start, end, a);
    	swap((a+start), (a+i));
    	permutation(a, start+1, end);
    	swap((a+start), (a+i));
    }
}
int main()
{
    char string[20];
    int n;
    
    printf("Enter a string: ");
    scanf("%s", string);
    
n = strlen(string);
    permutation(string, 0, n-1);
    
return 0;
}/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int compare(const void* a,const void* b){
    int buffer1 = *(const int*)a;
    int buffer2 = *(const int*)b;
    if (buffer1<buffer2)    return -1;
    if (buffer1>buffer2)    return 1;
    return 0;
    //if (*a>*b)	return 1;
}
int main()
{
    int array[3];
    for (int i=0;i<3;i++){
    	scanf("%d",&array[i]);
	}
    int size=sizeof(array)/sizeof(int);
    qsort(array,size,sizeof(int),compare);
    for (int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    /*int a=10,b=33;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);*/
    /*char source[]="Chowdri";
    int size=sizeof (source);
    char destination[size];
    memcpy(destination,source,sizeof (source));
    printf("%s",destination);
}*/
