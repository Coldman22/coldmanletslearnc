/*Ramesh basic salary is input through the keyboard
His dearness allowanc is 40% of basic salary, and house rent allowance is 20% of basic salary
Write a program to calculate his gross salary*/
/* Calculate Ramesh's gross salary*/
#include <stdio.h>
int main()
{
    float bp, da, hra, grpay;
    printf("\nEnter Basic Salary of Ramesh:");
    scanf("%f",&bp);
    da = 0.4*bp;
    hra = 0.2*bp;
    grpay = bp+da+hra;
    printf("Basic Salary of Ramesh= %f\n",bp);
    printf("Dearness Allowance= %f\n",da);
    printf("House Rent Allowance= %f\n",hra);
    printf("Gross Pay of Ramesh is %f\n",grpay);
    return 0;
}
/*
Output: 
Basic Salary of Ramesh= 1200.0000
Dearness Allowance = 480.00000
House Rent Allowance= 240.00000
Gross Pay of Ramesh is 1920.0000
*/