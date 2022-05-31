#include <stdio.h>
// Write a program to calculate x^n without using library function pow( ) but using user defined function.
void Tot(int num, int pow){
    int Total = 1;
    for (int i = 0; i < pow; i++){
        Total *= num;
    }
    printf("Ans : %d",Total);
}

void main(){
    int num,pow;
    printf("Enter Base No. : ");
    scanf("%d",&num);
    printf("Enter Power No. : ");
    scanf("%d",&pow);
    Tot(num,pow);
}