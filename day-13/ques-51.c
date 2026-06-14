#include <stdio.h>
int main() {
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(i=0;i<n;i++) {
        if (arr[i]<min) {
            min=arr[i];
        }
    }
    for(i=0;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    printf("Minimum array is:%d\                                                            n",min);
    printf("Maximum array is:%d",max);
    return 0;
}