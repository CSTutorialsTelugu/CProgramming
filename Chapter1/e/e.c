/**
 * The length & breadth of a rectangle and radius of a circle are input 
 * through the keyboard. Write a program to calculate the area & perimeter 
 * of the rectangle, and the area & circumference of the circle.
*/

#include<stdio.h>

float area_of_rectangle(float l, float b) {
    float area = l*b;
    return area;
}

float perimeter_of_rectangle(float length, float breadth) {
    float perimeter = 2 * (length + breadth);
    return perimeter;
}

float area_of_circle(float r) {
    float area = 3.14 * r * r;
    return area;
}

float circumference_of_circle(float r) {
    float circum = 2 * 3.14 * r;
    return circum;
}


int main() {
    float length, breadth, radius, area_rectangle, perimeter_rectangle, area_circle, circumference;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area_rectangle = area_of_rectangle(length, breadth);
    perimeter_rectangle = perimeter_of_rectangle(length, breadth);

    area_circle = area_of_circle(radius);
    circumference = circumference_of_circle(radius);

    printf("Area of rectangle: %.2f, Perimeter of Rectangle: %.2f\n", area_rectangle, perimeter_rectangle);
    printf("Circumference of Circle: %.2f, Area of Circle: %.2f\n", circumference, area_circle);
}