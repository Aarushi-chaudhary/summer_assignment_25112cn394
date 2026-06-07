#include <stdio.h>
int sum(int n) {
    if (n==0) {
        return 0;
    } else {
 return (n%10)+sum(n/10);
    }
}
    int main() {
        int num,res;
        printf("Enter number:");
        scanf("%d",&num);
        res=sum(num);
        printf("Sum of digits is:%d",res);
 return 0;
    }