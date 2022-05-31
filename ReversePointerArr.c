#include <stdio.h>
int main() {
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter value for index arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int *ptr1 = &arr[0],*ptr2 = &arr[n-1];
    while (ptr1 <= ptr2){
        printf("%d,",*ptr2);
        (ptr2)--;
    }
}