#include <stdio.h>
void main() {
    int R,C;
    printf("Enter No. of Rows : ");
    scanf("%d",&R);
    printf("Enter No. of Columns : ");
    scanf("%d",&C);
    int arr[R][C],i,j,Diag = 0;
    if (R==C){
        Diag = C-1;
        for (i = 0; i < R; i++){
            for (j = 0; j < C; j++){
                printf("Enter value for arr[%d][%d] index : ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
        for (i = 0; i < R; i++){
            for (j = 0; j < C; j++){
                if (Diag != 0){
                    if (i==j || i+j==Diag){
                        printf("%d ",arr[i][j]);
                    }
                    else {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
    }
    else {
        printf("Not a square matrix");
    }
    
}