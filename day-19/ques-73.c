#include <stdio.h>
int main() {
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter row and coloumn of matrix a and b:");
    scanf("%d%d",&r,&c);
    //Matrix A
    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix b:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    //add matrix
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of matrix A and B:\n");
    for(i=0;i<r;i++) {
    for(j=0;j<c;j++) {
        printf("%d ",sum[i][j]);
    }
    printf("\n");
    }
}