/**
 * Temperature of a city in Fahrenheit degrees is input through the keyboard. 
 * Write a program to convert this temperature into Centigrade degrees.
*/
#include<stdio.h>

int main() {
    float fr, cent;

    printf("Enter the Temperature of a city in Fahrenheit degree: ");
    scanf("%f", &fr);

    cent = 5.0/9.0 * (fr-32);
    printf("Temperature of a city in Centigrade degrees: %.2f", cent);
}