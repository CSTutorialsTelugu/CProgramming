/**
 * Mahesh’s basic salary is input through the keyboard. 
 * His dearness allowance is 40% of basic salary, 
 * and house rent allowance is 20% of basic salary. 
 * Write a program to calculate his gross salary.
 */

#include<stdio.h>

int main() {
    float basicSalary, dearnessAllowance, houseAllowence, grossSalary;
    printf("Enter Person's basic salary: ");
    scanf("%f", &basicSalary);

    dearnessAllowance = 0.4*basicSalary;
    houseAllowence = 0.2*basicSalary;
    /* Grosspay = sun of basic & all allowances */
    grossSalary = basicSalary + dearnessAllowance + houseAllowence; 

    printf("Gross salary: %.2f", grossSalary);
}



