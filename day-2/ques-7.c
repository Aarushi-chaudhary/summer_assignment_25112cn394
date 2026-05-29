#include <stdio.h>
int main() {
    int n,rem,prd=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0) {
        rem=n%10;
        prd=prd*rem;
        n=n/10;
    } 
    printf("product of digits is: %d",prd);
    return 0;
}