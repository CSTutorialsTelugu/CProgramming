/** 
 * The distance between two cities (in km.) is input through the keyboard. 
 * Write a program to convert and print this distance in meters, feet, 
 * inches and centimeters.
*/

#include<stdio.h>

int main() {
    float distanceInKM, distanceInM, distanceInCM, distanceInFt, distanceInInch;
    printf("Enter the distance in Kilometers : ");
    scanf("%f", &distanceInKM);

    distanceInM = distanceInKM * 1000;
    distanceInCM = distanceInM * 100;
    distanceInInch = distanceInCM/2.54;
    distanceInFt = distanceInInch/12;

    printf("Distance in Meters: %.2f\n", distanceInM);
    printf("Distance in centimeters: %.2f\n", distanceInCM);
    printf("Distance in Inches: %.2f\n", distanceInInch);
    printf("Distance in Feet: %.2f\n", distanceInFt);
}