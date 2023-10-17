#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int lcm=m<n?m:n;
    while (1){
        if (m%lcm==0&&n%lcm==0){
            break;
        }
        else{
            lcm++;
        }
    }
    printf("%d",lcm);
    int gcd = m*n/lcm;
    printf(" %d",gcd);
}
