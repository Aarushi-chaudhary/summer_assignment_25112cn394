#include <stdio.h>
int fibonacci(int n){
if(n==0){
    return 0;
  }  else if(n==1) {
        return 1;
    } else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
} 
int main() {
    int num,res;
    printf("Enter n:");
    scanf("%d",&num);
    res=fibonacci(num);
    printf("Fibonacci of %d is %d",num,res);
    return 0;
}
