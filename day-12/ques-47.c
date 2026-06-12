#include <stdio.h>
int fibonnaci(int n){
    if(n==0) {
        return 0;
    } else if(n==1){
        return 1;
    } else {
        return fibonnaci(n-1)+fibonnaci(n-2);
    }
}
int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int result=fibonnaci(num);
    printf("Fibonacci :%d",result);
    return 0;
}