#include <stdio.h>
int main() {
    int n,isprime=1;
    printf("Enter n:");
    scanf("%d",&n);
    if(n<=1) {
        isprime=0;
    } else {
     for(int i=2;i<n;i++) {
        if(n%i==0) {
            isprime=0;
            break;
        }
     }
    }
    if(isprime) {
        printf("%d is prime number",n);
      }
        else {
            printf("%d is not a prime number",n);
    } 
    return 0;
}