#include <stdio.h>
int main() {
    int n,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp) {
        printf("Number is a palindrome");
    } else {
        printf("Number is not a palindrome");
    } 
    return 0;
}