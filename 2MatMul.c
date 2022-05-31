#include <stdio.h>
// Error
void main() {
    int R1,C1,R2,C2;
    printf("Enter No. of Rows for Mat-1 : ");
    scanf("%d",&R1);
    printf("Enter No. of Columns for Mat-1 : ");
    scanf("%d",&C1);
    printf("Enter No. of Rows for Mat-2 : ");
    scanf("%d",&R2);
    printf("Enter No. of Columns for Mat-2 : ");
    scanf("%d",&C2);
    if (C1 == R2){
        int arr1[R1][C1],arr2[R2][C2];
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C1; j++){
                printf("Enter value for arr[%d][%d] of Mat-1 : ",i,j);
                scanf("%d",&arr1[i][j]);
            }
        }
        for (int i = 0; i < R2; i++){
            for (int j = 0; j < C2; j++){
                printf("Enter value for arr[%d][%d] of Mat-2 : ",i,j);
                scanf("%d",&arr2[i][j]);
            }
        }
        int arr3[R1][C2],Sum,l=0;
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C2; j++){
                Sum += arr1[i][j]*arr2[j][i];
            }
            if (++l != C2){
                arr3[i][l] = Sum;
                Sum = 0;           
            }
            else {
                l = 0;
                arr3[i][l] = Sum;
                Sum = 0;
            }
        }
        for (int i = 0; i < R1; i++){
            for (int j = 0; j < C2; j++){
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Invalid Matrix Input");
    }
}