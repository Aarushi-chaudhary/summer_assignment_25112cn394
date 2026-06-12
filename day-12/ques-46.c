#include<stdio.h>
int armstrong(int n){
    int orgnl=n;
    int rem,arm=0;
    while(n!=0) {
        rem=n%10;
        arm=arm+(rem*rem*rem);
        n=n/10;
    } 
    return (orgnl==arm);
}
int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(armstrong(num)) {
        printf("%d is armstrong",num);
    } else {
        printf("%d is not armstrong",num);
    } 
    return 0;
}