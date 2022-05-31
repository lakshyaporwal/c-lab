#include <stdio.h>
// Write a program to calculate binomial coefficient using function.
int Fact(int No){
    int Sum = 1;
    for (int i = 2; i <= No; i++){
        Sum *= i;
    }
    return Sum;
}
int Bin(int N,int K) {
    return Fact(N)/(Fact(K)*Fact(N-K));
}
void main() {
    int N;
    printf("Enter the Value of N : ");
    scanf("%d",&N);
    for (int K = 0; K <= N; K++){
        printf("Coeffecient of x^(%d) : %d\n",K,Bin(N,K));
    }
}