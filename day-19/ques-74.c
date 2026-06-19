#include <stdio.h>
int main() {
    int r,c,a[100][100],b[100][100],sub[100][100],i,j;
    printf("Enter row and column:");
    scanf("%d%d",&r,&c);
    //matrix A
    printf("Enter matrix A:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    //matrix b
    printf("Enter matrix B:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    //subtract
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Subtraction of B from A:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ",sub[i][j]);
        }
    printf("\n");
    }
    return 0;
}