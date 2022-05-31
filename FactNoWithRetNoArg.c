#include <stdio.h>
// Write a program to find factorial of a number using function of return type with no argument.
int Fact() {
    int N,Sum = 1;
    printf("Enter the No. : ");
    scanf("%d",&N);
    for (int i = 2; i <= N; i++){
        Sum *= i;
    }
    return Sum;
}
void main() {
    int Sum = Fact();
    printf("Factorial : %d",Sum);
}