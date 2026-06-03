#include <stdio.h>
#include <math.h>
int main() {
    int n1,n2,i,j,gcd;
    printf("Enter numbers:");
    scanf("%d%d",&n1,&n2);
    //find factor of number 1
    printf("Factor of n1:\n");
    for(i=1;i<=n1;i++) {
        if(n1%i==0) {
    printf("%d ",i);
        }
    } 
    printf("\n");
    // factor of number 2
    printf("Factor of n2:\n");
    for(j=1;j<=n2;j++) {
        if(n2%j==0) {
            printf("%d ",j);
        } 
    }
    printf("\n");
    // now find GCD
    for(i=1;i<=n1&&i<=n2;i++){
            if(n1%i==0&&n2%i==0) {
                gcd=i;
            }
            }
            printf("GCD IS :%d",gcd);
        }
    