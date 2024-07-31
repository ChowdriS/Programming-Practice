#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 5
#define G1M 204.31
#define Print "\nSquare root of g by m is 204.31"
void transverseMode(int sum_avg){
	printf(Print);
	printf("\nThe Formula for Frequency of Transverse mode is 0.5*squareroot(M)/L*squareroot(g/m)");
	printf("\nThe Frequency is %.2f Hz",0.5*sum_avg*G1M);
}
void longitudinalMode(int sum_avg){
	printf(Print);
	printf("\nThe Formula for Frequency of Longitudinal mode is squareroot(M)/L*squareroot(g/m)");
	printf("\nThe Frequency is %.2f Hz",sum_avg*G1M);
}
void process(){
}
int main(){
	float massp,mass[N],loop[N],length[N],emass[N],elength[N],M1L[N],sum_avg=0;
	int choice;
	char ch[100];
	printf("Choices-->\n1.Transverse Mode\n2,Longitudinal Mode\n");
	redo:
		{
		printf("Enter the choice : ");
		scanf("%d",&choice);}
	if (choice==1||choice==2)
	{
		do{
		goto redo;
		switch(choice){
			case 1:{
				goto input;
				process:
					transverseMode(sum_avg);
				break;
			}
			case 2:{
				goto input;
				process:
					longitudinalMode(sum_avg);
				break;
			}	
		}
		printf("\n\nDo You want to continue?Type Yes or No!!");
		scanf("%s",ch);
		}while(!strcmp(ch,"Yes")||!strcmp(ch,"yes")||!strcmp(ch,"YES"));
	}
	else 
	{
		printf("\n***Ohh NO...Its not a Invalid Choice!!***");
		goto redo;
	}
	return 0;
	input:
				printf("Enter the mass of the pan : ");
				scanf("%f",&massp);
				for (int i=0;i<N;i++){
					printf("\nTrail %d",i);
					printf("\nEnter the load mass : ");
					scanf("%f",&mass[i]);
					emass[i]=massp+mass[i];
					printf("\nEnter the no of loops : ");
					scanf("%f",&loop[i]);
					printf("\nEnter the Length of the loops : ");
					scanf("%f",&length[i]);}
					elength[i]=(float)((int)length[i]/loop[i]);
					M1L[i]=(float)((int)sqrt(emass[i]*1e-3)/(int)elength[i]);
					sum_avg+=M1L[i];
				}
				sum_avg=(float)((int)sum_avg/N);
				goto process;
}
/*#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 5
#define G1M 204.31
#define Print "\nSquare root of g by m is 204.31"
void transverseMode(int sum_avg){
	printf(Print);
	printf("\nThe Formula for Frequency of Transverse mode is 0.5*squareroot(M)/L*squareroot(g/m)");
	printf("\nThe Frequency is %.2f Hz",0.5*sum_avg*G1M);
}
void longitudinalMode(int sum_avg){
	printf(Print);
	printf("\nThe Formula for Frequency of Longitudinal mode is squareroot(M)/L*squareroot(g/m)");
	printf("\nThe Frequency is %.2f Hz",sum_avg*G1M);
}
void process(int a,int sum_avg){
    if (a==1||if)
}
int main(){
	float massp,mass[N],loop[N],length[N],emass[N],elength,M1L[N],sum_avg=0.0;
	int choice;
	char ch[100];
	printf("Choices-->\n1.Transverse Mode\n2,Longitudinal Mode\n");
	redo:
		{
		printf("Enter the choice : ");
		scanf("%d",&choice);}
	if (choice==1||choice==2)
	{
		do{
		goto redo;
		switch(choice){
			case 1:{
				goto input;
				process:
					transverseMode(sum_avg);
				break;
			}
			case 2:{
				goto input;
				process:
					longitudinalMode(sum_avg);
				break;
			}	
		}
		printf("\n\nDo You want to continue?Type Yes or No!!");
		scanf("%s",ch);
		}while(!strcmp(ch,"Yes")||!strcmp(ch,"yes")||!strcmp(ch,"YES"));
	}
	else 
	{
		printf("\n***Ohh NO...Its not a Invalid Choice!!***");
		goto redo;
	}
	return 0;
	input:
				printf("Enter the mass of the pan : ");
				scanf("%f",&massp);
				for (int i=0;i<N;i++){
					printf("\nTrail %d",i);
					printf("\nEnter the load mass : ");
					scanf("%f",&mass[i]);
					emass[i]=massp+mass[i];
					printf("\nEnter the no of loops : ");
					scanf("%f",&loop[i]);
					printf("\nEnter the Length of the loops : ");
					scanf("%f",&length[i]);}
					elength=(float)((int)length[i]/loop[i]);
					M1L[i]=(float)((int)sqrt(emass[i]*1e-3)/(int)elength);
					sum_avg+=M1L[i];
				}
				// sum_avg=(float)((int)sum_avg/N);
				goto process(choice,(float)((int)sum_avg/N));
}*/
