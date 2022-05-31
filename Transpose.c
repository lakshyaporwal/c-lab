#include <stdio.h>
void main() {
    int R,C;
    printf("Enter No. of Rows : ");
    scanf("%d",&R);
    printf("Enter No. of Columns : ");
    scanf("%d",&C);
    int arr[R][C],i,j,k;
    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            printf("Enter value for arr[%d][%d] index : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            k=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=k;
        }
    }
    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            printf("%d ",arr[i][j]);
        }
    }
}