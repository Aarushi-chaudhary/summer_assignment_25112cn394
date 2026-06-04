#include <stdio.h>
int main() {
    int n,i,nextrm;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int t1=0;
    int t2=1;
    printf("Fabonacci series is:\n");
    for(i=0;i<=n;i++) {
        printf("%d ",t1);
     nextrm=t1+t2;
     t1=t2;
     t2=nextrm;
     
    } 
    return 0;
}