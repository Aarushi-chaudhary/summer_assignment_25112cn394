#include <stdio.h>
int main() {
    int n,div,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    //perfect number is equal to sum of divisor
    printf("Divisor of n is:");
    for(int i=1;i<n;i++) {
        if(n%i==0) {
            div=i;
            printf("%d ",div);
            sum+=div;
        }
    }
    if(sum==n) {
        printf("\n%d is Perfect number",n);
    } else {
        printf("\n%d is not a perfect number",n);
    } return 0;
}