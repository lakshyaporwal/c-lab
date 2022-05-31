#include <stdio.h>
void main() {
    // WAP to input a 2D array of size M*N and find the sum and average of all the elements.
    int r,c;
    printf("Enter No. of Rows : ");
    scanf("%d",&r);
    printf("Enter No. of Columns : ");
    scanf("%d",&c);
    int arr[r][c],i,j,sum = 0;
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter value for arr[%d][%d] index : ",i,j);
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];
        }
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Array : %d\n",sum);
    printf("Average of Array : %.2f",((float)sum/(r*c)));
}