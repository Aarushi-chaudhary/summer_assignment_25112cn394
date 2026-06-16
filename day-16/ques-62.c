#include <stdio.h>
int main() {
    int arr[] ={1,2,2,3,4,2,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxfreq=0,element;
    for(int i=0;i<n;i++) {
        int count=1;
        for(int j=1+i;j<n;j++) {
            if(arr[i]==arr[j]) {
                count ++;
            }
        } 
        if(count > maxfreq) {
            maxfreq=count;
            element=arr[i];
        }
    }
    printf("Element with max frequency=%d\n",element);
    printf("Frequency=%d\n",maxfreq);
    return 0;
}