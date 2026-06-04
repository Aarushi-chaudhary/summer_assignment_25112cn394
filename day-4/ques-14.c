#include <stdio.h>
int main() {
    int n,nexttrm;
    printf("Enter n term:");
    scanf("%d",&n);
    int t1=0;
    int t2=1;
    if(n==1) {
        printf("Nth fibonacci number:%d",t1);
    } else if (n==2){
        printf("Nth fibonacci number:%d",t2);
    } else {
    for(int i=3;i<=n;i++) {
        nexttrm=t1+t2;
        t1=t2;
        t2=nexttrm;
    }
        printf("Nth fibbonacci number:%d",nexttrm);
}
    return 0;
}