#include <stdio.h>
// Write a program to find factorial of a number using function of return type with argument.
int Fact(int N) {
    int Sum = 1;
    for (int i = 2; i <= N; i++){
        Sum *= i;
    }
    return Sum;
}
void main() {
    int N;
    printf("Enter the No. : ");
    scanf("%d",&N);
    int Sum = Fact(N);
    printf("Factorial : %d",Sum);
}