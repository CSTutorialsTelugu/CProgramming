/** 
 * A five-digit number is entered through 
 * the keyboard. Write a program to obtain 
 * the reversed number and to determine whether
 * the original and reversed numbers are equal or not.
 * 90109 - Palindrome
 */

#include<stdio.h>

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
    int num, rev_num = 0;

    printf("Enter the five digit number: ");
    scanf("%d", &num);
    rev_num = reverse_number(num);
    if(rev_num==num) {
        printf("This number is a palindrome\n");
    } else {
        printf("This number is not a palindrome\n");
    }
}

