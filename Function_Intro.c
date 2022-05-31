#include <stdio.h>
void Aman(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int a = 12;
    int b = 34;
    Aman(&a,&b);
    printf("%d %d",a,b);
}