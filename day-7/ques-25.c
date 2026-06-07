#include <stdio.h>
int factorial(int n){
if(n==0||n==1){
 return 1;
 } else { 
 return factorial(n-1)*n;
}
}
int main() {
     int num,res;
     printf("Enter number:");
     scanf("%d",&num);
     res=factorial(num);
     printf("Factorial of %d is:%d",num,res);
     return 0;
}