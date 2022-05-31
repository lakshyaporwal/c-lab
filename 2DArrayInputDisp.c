#include <stdio.h>
void main() {
    // WAP to input a 2D array of size M*N and display it in tabular form.
    int r,c;
    printf("Enter No. of Rows : ");
    scanf("%d",&r);
    printf("Enter No. of Columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("Enter value for arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}