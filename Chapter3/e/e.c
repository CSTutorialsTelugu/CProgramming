/** 
 * Write a program to find the range of a set of numbers. 
 * Range is the difference between the smallest and 
 * biggest number in the list.
 */
#include<stdio.h>
int main() {
    int num, min = 10000000, max = 0;
    char choice;
    do {
        printf("Enter the number: ");
        scanf("%d", &num);
        if(num<min) min=num;
        if(num>max) max=num;
        printf("Do you wish to enter more? y/n\n");
        scanf(" %c", &choice);
    } while(choice == 'y');

    printf("Range = %d", max-min);
}

