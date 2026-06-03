#include <stdio.h>
int main(){
    int start,end,prime;
    printf("Enter start and end of range:");
    scanf("%d%d",&start,&end);
    printf("Prime numbers are:\n");
    for(int i=start;i<=end;i++) {
   if(i<2) 
    continue;
  prime=1;
  for(int j=2;j<=i/2;j++) {
    if(i%j==0) {
        prime=0;
        break;
    }
  } 
   if(prime) 
    printf("%d\n",i);
   }
    
  
    return 0;
}