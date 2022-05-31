#include <stdio.h>
void main() {
    int arr[5][3] = {1,4,5,9,10,16,17,19,20,22,1,10,3,4};
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",arr[0][1],&arr[1],arr[1][1],&arr[1]+2);
}