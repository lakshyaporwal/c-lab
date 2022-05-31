#include <stdio.h>
void main() {
    int a = 10,x,*P;
    P = &a;
    printf("%d\n",P);
    x = ++(*P); // (*P)++ , *P++ , *(P++) , *(++P) , ++*P , *++P.
    printf("%d %d %d",x,P,sizeof(P));
}