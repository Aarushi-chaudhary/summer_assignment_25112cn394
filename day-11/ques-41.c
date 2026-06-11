#include<stdio.h>
int sum(int a,int b) {
    return a+b;
} 
int main() {
    int x,y;
    printf("Enter numbers:");
    scanf("%d%d",&x,&y);
    int result=sum(x,y);
    printf("Sum is %d",result);
    return 0;
}