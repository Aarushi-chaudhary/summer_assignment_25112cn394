#include<stdio.h>
long long factorial(int n) {
    long long fact=1;
    if(n==1||n==0) {
        return 1;
    } else {
        for(int i=1;i<=n;i++) {
            fact=fact*i;
        }
        return fact;
    }
}
int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int result=factorial(num);
    printf("Factor of %d is %d",num,result);
}