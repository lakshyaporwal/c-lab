#include <stdio.h>
// Electricity Bill Statement (EBS) takes units consumed from consumer and, 
// calculates electricity charges (EC) using provided criteria:
// 1 – 100 units @ Rs. 2.00/- (per unit)
// 101 – 200 units @ Rs. 3.50/- (per unit)
// 201 and more units @ Rs. 4.50/- (per unit)
// General sale tax which is the 10% of the EC.  
// Amount due (EC + Gen. Sale tax).

int EC(float Units,float Rate){
    printf("Rate : %.2f\n",Rate);
    Units *= Rate;
    printf("Electricity Charge : %.2f\n",Units);
    float GST = 0.1*Units;
    Units += GST;
    printf("General Sales Tax : %.2f\n",GST);
    printf("Amount Due : %.2f\n",Units); 
}
void main() {
    float Units,Rate;
    printf("Enter Units : ");
    scanf("%f",&Units);
    if (Units < 101){
        Rate = 2;
    }
    else if (Units >= 101 && Units < 201){
        Rate = 3.5;
    }
    else if (Units >= 201){
        Rate = 4.5;
    }
    EC(Units,Rate);
}