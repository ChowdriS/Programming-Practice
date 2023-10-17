//passing 2d array to function
/*#include<stdio.h>
int test(int*);
int main()
{
int a[3],c;
printf("Enter the values\n");
for (int i=0;i<3;i++)
	scanf("%d",&a[i]);
c=test(a);
printf("c is = %d",c);
return 0;
}

int test(int a[2])
{
int c;
c=a[0]+a[1]+a[2];
return c;

}*/
#include <stdio.h>
void displayNumbers(int num[3][3]);

int main() {
  int num[3][3];
  printf("-->");
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      scanf("%d", &num[i][j]);
    }
  }

  // pass multi-dimensional array to a function
  displayNumbers(num);

  return 0;
}
void displayNumbers(int num[3][3]) {
  printf("Displaying:\n");
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      printf("%d\n", num[i][j]);
    }
  }
}
