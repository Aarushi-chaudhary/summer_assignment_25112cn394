#include <stdio.h>
int main(){
    int n,rem,arm=0;
    printf("Enter number:");
    scanf("%d",&n);
    int orgnl=n;
    while(n!=0) {
   rem=n%10;
   arm=arm+(rem*rem*rem);
   n=n/10;
    } 
  if(arm==orgnl) {
    printf("%d is armstrong number",orgnl);
  } else {
    printf("%d is not a armstrong number",orgnl);
  }
    return 0;
}