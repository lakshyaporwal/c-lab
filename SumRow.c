#include <stdio.h>
void main() {
    int arr[3][3],i,j,sum1 = 0,sum2 = 0,sum3 = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Enter value for arr[%d][%d] index : ",i,j);
            scanf("%d",&arr[i][j]);
            if (i == 0){
                sum1 += arr[i][j];
            }
            else if (i == 1){
                sum2 += arr[i][j];
            }
            else if  (i == 2){
                sum3 += arr[i][j];
            }
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Array : %d\n",sum1);
    printf("Sum of Array : %d\n",sum2);
    printf("Sum of Array : %d\n",sum3);
}