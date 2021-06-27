/** 
* If cost price and selling price of an item is input 
* through the keyboard, write a program to determine whether
* the seller has made profit or incurred loss. 
* Also determine how much profit he made or loss he incurred 
*/

#include<stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;
    printf("Enter cost price and selling price : ");
    scanf("%f %f", &costPrice, &sellingPrice);

    profit = sellingPrice - costPrice;
    loss = costPrice - sellingPrice;

    if(profit>0) {
        printf("Made Profit of : %f\n", profit);
    } else if(loss>0) {
        printf("Made loss of : %f\n", loss);
    } else if(profit==0) {
        printf("No loss and no profit");
    }
}