#include <stdio.h>
int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Multiplication table is:\n");
    for(int i=1;i<=10;i++) {
        printf("%d*%d=%d\n",i,n,i*n);
    }
    
    return 0;
}