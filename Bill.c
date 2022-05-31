#include <stdio.h>
// Write a program that input the meal charge of a customer.  
// The tax should be 20% of the meal cost.  
// The tip should be 15% of the total after adding the tax.  
// Display the total bill on the screen using function.
void Bill(int Cost){
    printf("Customer Meal Charge : %d Ruppee\n",Cost);
    int Tax = 0.2*Cost;
    Cost += Tax;
    int Tip = 0.15*Cost; 
    Cost += Tip;
    printf("Tax : %d Ruppee\n",Tax);
    printf("Tip : %d Ruppee\n",Tip);
    printf("Total Bill : %d Ruppee",Cost);
}
void main() {
    int Cost;
    printf("Enter Customer Cost : ");
    scanf("%d",&Cost);
    Bill(Cost);
}