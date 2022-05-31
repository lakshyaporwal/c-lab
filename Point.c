#include <stdio.h>
int main() {
    int var = 73,*ptr = &var;
    printf("%p\n%p\n%p",&ptr,ptr,&var);
    return 0;
}