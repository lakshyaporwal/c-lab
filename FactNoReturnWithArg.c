#include <stdio.h>
// Write a program to find factorial of a number using function of no return type with argument.
void Fact(int N) {
    int Sum = 1;
    for (int i = 2; i <= N; i++){
        Sum *= i;
    }
    printf("Factorial : %d",Sum);
}
void main() {
    int N;
    printf("Enter the No. : ");
    scanf("%d",&N);
    Fact(N);
}