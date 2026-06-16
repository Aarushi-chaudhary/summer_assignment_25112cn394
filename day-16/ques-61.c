#include <stdio.h>
int main() {
    int arr[]={1,2,3,5,6};
    int n=6;//number should be 1 to 6
    int excepted_sum=n*(n+1)/2;
    int size=sizeof(arr)/sizeof(arr[0]);
    int actual_sum=0;
   for(int i=0;i<size;i++) {
    actual_sum+=arr[i];
   } 
   int missing=excepted_sum-actual_sum;
   printf("Missing number=%d\n",missing);
   return 0;
}