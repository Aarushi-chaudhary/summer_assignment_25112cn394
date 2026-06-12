#include <stdio.h>
int perfectnum(int n){
    int sum=0;
    int orgnl=n;
    for(int i=1;i<n;i++) {
        if(n%i==0) {
           sum=sum+i;
        }
    }
    return (sum==orgnl);
} 
int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(perfectnum(num)){
        printf("%d is perfect number",num);
    } else {
        printf("%d is not a perfect number",num);
    } 
    return 0;
}