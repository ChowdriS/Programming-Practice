#include<stdio.h>
#include<string.h>
int len(a){
    int count;
    for(int i=0;a[i]!='\0';i++)
        count++;
        return count;
}
int main()
{
    char a[100],c;
    char b[100];
    int count=0;
    gets(a);
    gets(b);
    char temp;
    for (int i=0;i<len(b)-1;i++)
    {
        for (int j=len(b)-1;j>i;j++)
        {
            temp=a[i];
            a[i]=a[j];							//Yet to work ****
            a[j]=
        }
    }
    for (int j=0;a[j]!='\0';j++)
    {   
        if(a[j]!=b[j])
            count=1;
    }
    if (count==0)
        printf("Both are same");
    else 
        printf("Both are different");
}
