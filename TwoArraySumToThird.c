#include <stdio.h>
void main() {
    int a[5],b[5],c[5];
    for (int i = 0; i < 5; i++){
        printf("Enter value for array a index %d :\n",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Enter value for array b index %d :\n",i);
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < 5; i++){
        c[i] = a[i]+b[i];
    }
    for (int i = 0; i < 5; i++){
        printf("%d,",c[i]);
    }
}