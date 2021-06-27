/** 
 * If the ages of Ram, Shyam and Ajay
 * are input through the keyboard, 
 * write a program to determine the 
 * youngest of the three
 */

#include<stdio.h>

int main() {
    int ramAge, shyamAge, ajayAge;
    printf("Enter Ram's age : ");
    scanf("%d", &ramAge);
    printf("Enter Shaym's age : ");
    scanf("%d", &shyamAge);
    printf("Enter Ajay's age : ");
    scanf("%d", &ajayAge);

    if(ramAge > shyamAge) {
        if(ajayAge > ramAge || ajayAge > shyamAge) {
            printf("Shyam is youngest");
        } else {
            printf("Ajay is youngest");
        }
    } else if(ajayAge > ramAge) {
        printf("Ram is youngest");
    } else {
        printf("Ajay is youngest");
    }
}