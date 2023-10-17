#include<stdio.h>
int mod(int x){
        return (x < 0 && (x *= -1), x);
}
int main()
{
	int a=-6;
	printf(mod(a));
	return 0;
}
