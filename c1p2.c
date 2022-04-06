/*The distance between two cities (In kilometer)is input through the keyboard.
Write a program to convert and print this distance in meters,feets,inches and centimeters*/
/*Conversion of distance*/
#include <stdio.h>
int main()
{
    float km,m,cm,ft,inch;
    printf("\nEnter the distance in kilometers:");
    scanf("%f", &km);
    m = km*1000;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;
    printf("Distance in meters= %f\n",m);
    printf("Distance in centimeters= %f\n", cm);
    printf("Distance in inch= %f\n", inch);
    printf("Distance in Feets= %f\n", ft);
    return 0;
}

/*
Output:
Enter distance in kilometer: 3
Distance in meters = 3000.0000
Distanec in centimeters = 300000.00000
Distance in inch = 118110.234375
Distance in Feets = 9842.519531
*/