/** 
 * Any year is input through the keyboard.
 * Write a program to determine whether 
 * the year is a leap year or not.
 * (Hint: Use the % (modulus) operator)
 * If year is divisible by 400 & 100. If not should be divisible by 4
 */

#include<stdio.h>

int main() {
    int year;
    printf("Enter the Year : ");
    scanf("%d", &year);

    // if(year%400==0) {
    //     if(year%100==0) {
    //         printf("Leap year");
    //     } else {
    //         printf("Not a leap year");
    //     }
    // } else {
    //     if(year%4==0) {
    //         printf("Leap year");
    //     } else {
    //         printf("Not a leap year");
    //     }
    // }

    if((year%400==0 && year%100==0) || year%4==0 ) {
        printf("Leap Year\n");
    } else {
        printf("Not a leap year\n");
    }
}

