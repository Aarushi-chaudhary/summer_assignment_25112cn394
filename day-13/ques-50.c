#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter number of array:");
    scanf("%d",&n);
int arr[n];
int i;
printf("Enter elements of array:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
} 
printf("Sum of array is");
for(i=0;i<n;i++) {
    sum=sum+arr[i];
} 
printf("%d",sum);
printf("\n");
int avg=sum/n;
printf("Average is %d",avg);
return 0;
}