#include <stdio.h>
int reverse(int n,int rev) {
    if(n==0)
        return rev;
    return reverse(n/10,rev*10+n%10);
} 
int main() {
    int num,res;
    printf("Enter number:");
    scanf("%d",&num);
    res=reverse(num,0);
    printf("Reverse number is:%d",res);
    return 0;
}