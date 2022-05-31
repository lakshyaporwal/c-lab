#include <stdio.h>
void main() {
    int r,c;
    printf("Enter No. of Rows : ");
    scanf("%d",&r);
    printf("Enter No. of Columns : ");
    scanf("%d",&c);
    int arr[r][c],i,j,csum1 = 0,csum2 = 0,csum3 = 0,rsum1 = 0,rsum2 = 0,rsum3 = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Enter value for arr[%d][%d] index : ",i,j);
            scanf("%d",&arr[i][j]);
            }
        }
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < c; i++){
        
    }
}