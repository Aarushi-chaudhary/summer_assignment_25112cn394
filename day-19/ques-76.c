#include <stdio.h>
int main() {
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    //matrix A
    printf("Enter rows and columns:");
    scanf("%d%d",&r,&c);
    printf("Enter matrix A:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    //matrix b
    printf("Enter matrix b:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    //diagonal sum
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            if(i==j) {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    printf("Diagonal sum is:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}