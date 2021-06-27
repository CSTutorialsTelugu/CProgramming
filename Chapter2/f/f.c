/** 
 * Write a program to input a five digit number from keyboard.
 * Also input a choice number. Based on value of choice,
 * perform following:
 * 1. Square of number
 * 2. Even or Odd
 * 3. Reverse of number
 * 4. Exit
 */

#include<stdio.h>
#include<stdlib.h>

int reverse_number(int num) {
    int rev_num = 0;
    rev_num = rev_num*10 + num%10; /* 9 */
    num = num/10; /* 1743 */
    rev_num = rev_num*10 + num%10; /* 90 + 3 */
    num = num/10; /* 174 */
    rev_num = rev_num*10 + num%10; /* 930 + 4 */
    num = num/10; /* 17 */
    rev_num = rev_num*10 + num%10; /* 9340 + 7 */
    num = num/10; /* 1 */
    rev_num = rev_num*10 + num%10; /* 93470 + 1 */
    return rev_num;
}

int main() {
    int number, choice;

    printf("Enter number and choice : ");
    scanf("%d %d", &number, &choice);

    switch(choice) {
        case 1:
            printf("Square of number : %d", number*number);
            break;
        case 2:
            number%2==0 ? printf("Even") : printf("Odd");
            break;
        case 3:
            printf("Reverse of number : %d", reverse_number(number));
            break;
        case 4:
            exit(0);
    }
}