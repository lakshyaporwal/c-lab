#include <stdio.h>
int sum(int a,int b){  // (return type) Function_Name(arg){} 
    int c = a+b;
    return c;
}
void main() {
    printf("CALLED !! %d",sum(5,6));
}
