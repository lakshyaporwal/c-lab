#include <stdio.h>
void main() {
    int R,C;
    printf("Enter No. of Rows : ");
    scanf("%d",&R);
    printf("Enter No. of Columns : ");
    scanf("%d",&C);
    int arr[R][C],Mul;
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            printf("Enter value for arr[%d][%d] element :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Before Multiplying :\n");
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the no. you want to mutiply it with : ");
    scanf("%d",&Mul);
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            arr[i][j] *=  Mul;
        }
    }
    printf("After Multiplying :\n");
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}