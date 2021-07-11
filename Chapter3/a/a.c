/** 
 * Write a program to find the factorial value of any number 
 * entered through the keyboard.
 * fact(3) = 3*2*1
 * fact(5) = 5*fact(4) = 5*4*fact(3) = ... 5*4*3*2*1
 */

#include<stdio.h>

int main() {
    int num, factorial = 1;
    printf("Enter the number");
    scanf("%d", &num);

    while(num>0) {
        factorial *= num;
        num--;
    }
    printf("Factorial of number if: %d", factorial);
}

