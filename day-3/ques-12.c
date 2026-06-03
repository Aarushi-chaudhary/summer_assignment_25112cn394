#include <stdio.h>
int main() {
    int n1,n2,i,j,gcd,lcm;
    printf("Enter numbers:");
    scanf("%d%d",&n1,&n2);
    //Lcm is
for(i=1;i<=n1&&i<=n2;i++) {
    if(n1%i==0&&n2%i==0) {
        gcd=i;
        lcm=(n1*n2)/gcd;
    }
}
printf("LCM IS :%d",lcm);
}