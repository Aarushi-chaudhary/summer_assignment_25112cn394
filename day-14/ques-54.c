#include <stdio.h>
int main() {
    int n,i,key,count=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of an array:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    } 
    printf("Enter element whose frequency is to be found: ");
    scanf("%d",&key);
    for(i=0;i<n;i++) {
        if(arr[i]==key){
            count ++;
        }
    } 
    printf("Frequency of %d is %d",key ,count);
    return 0;
}