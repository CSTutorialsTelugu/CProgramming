/**
 * If a five-digit number is input through the keyboard, 
 * write a program to reverse the number.
 * Ex: 17439 == 93471 -- ((((9*10+3)*10+4)*10+7)*10+1)
 * 9 -- 90+3 -- 93*10 + 4 -- 934*10+7 -- 9347*10+1 -- 93471
*/
#include<stdio.h>
int main() {
    int num, rev_num = 0;

    printf("Enter the five digit number: ");
    scanf("%d", &num);

    rev_num = rev_num*10 + num%10; /* 9 */
    num = num/10; /* 1743 */
    rev_num = rev_num*10 + num%10; /* 90 + 3 */
    num = num/10; /* 174 */
    rev_num = rev_num*10 + num%10; /* 930 + 4 */
    num = num/10; /* 17 */
    rev_num = rev_num*10 + num%10; /* 9340 + 7 */
    num = num/10; /* 1 */
    rev_num = rev_num*10 + num%10; /* 93470 + 1 */

    printf("Reversed number: %d", rev_num);
}

