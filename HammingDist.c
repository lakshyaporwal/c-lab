#include <stdio.h>
    // The hamming distance between two patterns is the number of bit positions in which they differ. 
    // For example, the hamming distance between the following two patterns is 2 :
	// 0101
	// 1111
    // Write a program that reads two non-negative integers from the user, 
    // converts them to   their binary representations, 
    // and compute the hamming distance between them.
    // Input --> Two numbers M, N
    // Output --> An integer number representing hamming distance between them
    // Example -->
    // Input: 5, 15
    // Output: 2
int Binary(int K){
    int Mul = 1,Num = 0;
    while (K != 0) {
        Num += Mul*(K%2);
        Mul *= 10;
        K /= 2;
    }
    return Num;
}
int Hamming(int BM, int BN){
    int C = 0;
    while (!(BM == 0 && BN == 0)){
        if (BM%10 != BN%10){
            C += 1;  
        }
        BM /= 10;
        BN /= 10;
    }
    return C;
}
void main() {
    int M,N;
    printf("Enter 1st No. : ");
    scanf("%d",&M);
    printf("Enter 2nd No. : ");
    scanf("%d",&N);
    int BM = Binary(M);
    int BN = Binary(N);
    printf("Binary of M : %d\n",BM);
    printf("Binary of N : %d\n",BN);
    printf("Hamming Distance : %d\n",Hamming(BM,BN));
}   