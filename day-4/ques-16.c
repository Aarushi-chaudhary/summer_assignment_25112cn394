#include <stdio.h>
int main() {
    int start,end,i,rem;
    printf("Enter range:");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++) {
      int temp=i;
      int arm=0;
      while(temp!=0) {
       rem=temp%10;
       arm=arm+(rem*rem*rem);
       temp=temp/10;
      } 
      if(arm==i) {
        printf("%d ",i);
      }
    }
    return 0;
}