/**
 * If the marks obtained by a student in five different subjects 
 * are input through the keyboard, find out the aggregate marks and
 * percentage marks obtained by the student. Assume that the maximum 
 * marks that can be obtained by a student in each subject is 100.
*/

#include<stdio.h>

int main() {
    float marks1, marks2, marks3, marks4, marks5, aggregate, percentage;
    printf("Enter marks obtained in the five subjects : ");
    scanf("%f %f %f %f %f", &marks1, &marks2, &marks3, &marks4, &marks5);

    aggregate = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (aggregate/500)*100;

    printf("Aggregate: %.2f and Percentage: %.2f", aggregate, percentage);
}