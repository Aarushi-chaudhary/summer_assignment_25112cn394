#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int i;
    int arr[n];
    printf("Enter array:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(i=0;i<n;i++) {
        if(arr[i]%2==0) {
            even ++;
        } else {
            odd++;
        }
    }
    printf("Even number of elements is:%d\n",even);
    printf("Odd number of elements is:%d",odd);
    return 0;
}