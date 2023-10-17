/*#include<stdio.h>
int main()
{
	int a[3][3];
	for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for (int i=0;i<3;i++)
		{
		for (int j=0;j<3;j++)
			printf("%d\t",a[i][j]);	
			printf("\n");
        }}
    #include<stdio.h>  
    int main()
{      
    int i=0,j=0;  
  
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};     

    //traversing 2D array    
    for(i=0;i<4;i++)
	{    
     for(j=0;j<3;j++)
	{    
       printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
     	}//end of j    
    }//end of i    
    return 0;  
    }*/
#include <stdio.h>    
    int main ()    
    {    
        int arr[4][4],i,j;     
        for (i=0;i<2;i++)    
        {    
            for (j=0;j<2;j++)    
            {    
                printf("Enter a[%d][%d]: ",i,j);                
                scanf("%d",&arr[i][j]);    
            }    
        }    
        printf("\n printing the elements ....\n");     
        for(i=0;i<2;i++)    
        {    
            printf("\n");    
            for (j=0;j<2;j++)    
            {    
                printf("%d\t",arr[i][j]);    
            }    
        }    
    }

