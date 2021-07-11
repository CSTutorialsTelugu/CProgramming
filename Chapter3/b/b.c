/** 
 * Two numbers are entered through the keyboard. 
 * Write a program to find the value of one number
 * raised to the power of another.
 * a,b -- a^b = a*a*a*a...
 */

#include<stdio.h>

int main() {
    int a,b,power=1;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    
    while(b>0) {
        power *= a;
        b--;
    }

    printf("Power of one number to the other: %d\n", power);

}