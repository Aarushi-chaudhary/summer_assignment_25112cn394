#include <stdio.h>
int main() {
    int n;
    printf("Enter number of array:");
    scanf("%d",&n);
    int arr[n];
    int i;
    //print array
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
} 
// display array
 printf("Array is:\n");
for(i=0;i<n;i++) {
    printf("%d ",arr[i]);
}
return 0;
}