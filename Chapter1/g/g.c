/**
 * If a five-digit number is input through the keyboard, 
 * write a program to calculate the sum of its digits
 * Hint: Use modulas (%) operator    
 * Ex: 17439
*/
#include<stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter the five digit number: ");
    scanf("%d", &num);

    sum = sum + num%10;  /* Extracts 1s position digit 17439%10 = 9 */
    num = num/10;        /* num = 1743 */
    sum = sum + num%10;  /* Extracts 10s position digit 1743%10 = 3 */
    num = num/10;        /* num = 174 */
    sum = sum + num%10;  /* Extracts 100s position digit 174%10 = 4 */
    num = num/10;        /* num = 17 */
    sum = sum + num%10;  /* Extracts 1000s position digit 17%10 = 7 */
    num = num/10;        /* num = 1 */
    sum = sum + num%10;  /* Extracts 10000s position digit 1%10 = 1 */

    printf("Sum of digits: %d", sum);
}

