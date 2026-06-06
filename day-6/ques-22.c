#include <stdio.h>
int main() {
    long long n;
    //n=binary
    int rem,dec=0,base=1;
    printf("Enter binary number:");
    scanf("%lld",&n);
//multiply each binary digit by 2 raised to its position and add the results
    while(n>0){
  rem=n%10;
  dec=dec+rem*base;
  base=base*2;
  n=n/10;
    } 
    printf("Decimal number=%d",dec);
    return 0;
}