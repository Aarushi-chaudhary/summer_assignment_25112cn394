#include <stdio.h>
int reverse(int n){
    int rem,rev=0;
    int temp=n;
  while(n!=0) {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
  return (temp==rev);
}
int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
   ;
    if(reverse(num)) {
        printf("%d is palindrome",num);
    } else{
        printf("%d is not palindrome",num);
    }
    return 0;
}