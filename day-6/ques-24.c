#include <stdio.h>
int main(){
    int x;
    printf("Enter base:");
    scanf("%d",&x);
    int n;
    printf("Enter exponent:");
    scanf("%d",&n);
    int power=1;
    for(int i=1;i<=n;i++) {
     power=power*x;
    } 
    printf("%d^%d=%d",x,n,power);
    return 0;
}