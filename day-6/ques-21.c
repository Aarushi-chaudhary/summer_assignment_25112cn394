#include <stdio.h>
int main() {
    int n,rem,binary[32],i=0;
    printf("Enter number:");
    scanf("%d",&n);
        while(n>0) {
        rem=n%2;
        binary[i]=rem;
        i++;
        n=n/2;
} 
printf("Binary is:");
for(int j=i-1;j>=0;j--) {
    printf("%d",binary[j]);
}
return 0;
}