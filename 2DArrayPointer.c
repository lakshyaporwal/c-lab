#include <stdio.h>
void main() {
    int r,c;
    printf("Enter the number of rows of the array : ");
    scanf("%d",&r);
    printf("Enter the number of columns of the array : ");
    scanf("%d",&c);
    int arr[r][c],(*p)[r];
    p = arr;
    for (int i = 0; i < r ; i++){
        for (int j = 0; j < c ; j++){
            printf("Enter element value at arr[%d][%d] : ",i,j);
            scanf("%d",&p[i][j]);
        }
    }
    for (int i = 0; i < r ; i++){
        for (int j = 0; j < c ; j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}