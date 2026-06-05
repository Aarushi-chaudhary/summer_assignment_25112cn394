#include <stdio.h>
int main() {
    int n,i,rem,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    int temp=n;
    while(temp>0) {
  rem=temp%10;
  int fact =1;
        for(i=1;i<=rem;i++) {
            fact=fact*i;
        }
            sum=sum+fact;
            temp=temp/10;

        }
    //strong number is a number which is equal to their factorial of its digit
if(sum==n) {
    printf("%d is a strong number",n);
} else{
    printf("%d is not a strong number",n);
}
}