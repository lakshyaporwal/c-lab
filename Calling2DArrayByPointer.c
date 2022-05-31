#include<stdio.h>

void print(int row ,int col,int (*arr)[row]){
    for(int i =0;i<row+col;i++){
        printf("%d ",*(*arr+i));
        // Other Way -->
        // for (int j = 0; j < col; j++){
        //     printf("%d ",*(*(arr+i)+j));
        // }
    }
}
int main(){
    int arr[2][2]={3,4,5,6};
    print(2,2,arr);
}