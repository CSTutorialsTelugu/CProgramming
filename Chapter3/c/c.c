/** 
 * Write a program to print all the ASCII values 
 * and their equivalent characters using a while loop. 
 * The ASCII values vary from 0 to 255.
 */

#include<stdio.h>

int main() {
    int i;
    for(i=0;i<256;i++) {
        printf("ASCII value: %d and char: %c\n", i, i);
    }
}