#include <stdio.h>
int main() {
    int r,c,i,j,a[100][100];
    printf("Enter row and column:");
    scanf("%d%d",&r,&c);
    //matrix A
    printf("Enter matrix A:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
    scanf("%d ",&a[i][j]);
    }
}
printf("Original matrix:\n");
for(i=0;i<r;i++) {
    for(j=0;j<c;j++) {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
    //transpose
    printf("Transpose of matrix A:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ",a[j][i]);
        } 
        printf("\n");
    } 
    return 0;
}