/*//passing 2d array to function
#include<stdio.h>
int test(int,int,int);
int main()
{
int a,b,c;
printf("Enter the values\n");
scanf("%d%d%d",&a,&b,&c);
int j=test(a,b,c);
printf("c is = %d",j);
return 0;
}

int test(int a,int b,int d)
{
int c;
c=a+b+d;
return c;

}*/
/*#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    printf("-->");
    int a[n],j,i,count=1;
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    printf ("-->");
    /*for (i=0;i<n;i++)
    {
        j=0;
        while(a[j])
        {
            if (i==j)   continue;
            if (a[i]==a[j]){
                count++;
                a[j]==0;
            }
            j++;
            if (j==n)   break;
        }
        printf("%d-%d\n",a[i],count);
    }
    for (i=0;i<n;i++)
    {
    	if (2==a[i])
    	{
    		count++
		}
	}*/
#include<stdio.h>
int main( ){
   FILE *fp;
   int i; 
  	fp = fopen ("num.txt", "w");
   for (i =1; i<= 10; i++){
      putw (i, fp);
   }
   fclose(fp);
   fp =fopen ("num.txt", "r");
   printf ("file content is\n");
   for (i =1; i<= 10; i++){
      i= getw(fp);
      printf ("%d",i);
      printf("\n");
   }
   fclose (fp);
   return 0;
}






