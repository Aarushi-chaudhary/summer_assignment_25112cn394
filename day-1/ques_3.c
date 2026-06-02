#include <stdio.h>
int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    unsigned long long fact=1;
    if(n<0) {
        printf("Error!");
    } else {
        for(int i=1;i<=n;i++) {
            fact=fact*i;
        }
        printf("Factorial of %d is:%d",n,fact);
    } 
    return 0;

}