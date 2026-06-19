#include <stdio.h>
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={6,7,8};
    int n1=5,n2=3;
    int merged[n1+n2];
    //copy first array
    for(int i=0;i<n1;i++) {
     merged[i]=arr1[i];
    } 
    //copy second array
    for(int i=0;i<n2;i++) {
        merged[n1+i]=arr2[i];
    } 
    //Print merged array
    printf("Merged array: ");
    for(int i=0;i<n1+n2;i++) {
        printf("%d ",merged[i]);
    } 
    return 0;
}