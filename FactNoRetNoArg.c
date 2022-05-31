#include <stdio.h>
// Write a program to find factorial of a number using function of no return type no argument.
void Fact() {
    int N,Sum = 1;
    printf("Enter the No. : ");
    scanf("%d",&N);
    for (int i = 2; i <= N; i++){
        Sum *= i;
    }
    printf("Factorial : %d",Sum);
}
void main() {
    Fact();
}