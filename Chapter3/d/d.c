/** 
 * Write a program to find the reverse of any integer
 */

#include<stdio.h>

int main() {
    int num, rev_num = 0;
    printf("Enter value of number: ");
    scanf("%d", &num);
    while(num>0) {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    printf("Reverse of given number: %d\n", rev_num);
}