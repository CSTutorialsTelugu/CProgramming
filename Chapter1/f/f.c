/**
 * Two numbers are input through the keyboard into two locations C and D. 
 * Write a program to interchange the contents of C and D. 
*/
#include<stdio.h>

int main() {
    float C = 1, D = 5, temp;

    printf("Enter C and D values: ");
    scanf("%f %f", &C, &D);

    /* Swapping C and D using temp variable */
    temp = C;
    C = D;
    D = temp;

    printf("Value in C: %f and Value in D: %f", C, D);
}