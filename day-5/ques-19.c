#include<stdio.h>
int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Prime factors are:");
    for(int i=2;i<=n;i++) {
        while(n%i==0) {
            printf(" %d",i);
            n=n/i;
        }
    }
    return 0;
    }
