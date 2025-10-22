/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:c program to displaly calculated electricity bills
*/

#include<stdio.h>
int total_bill(int units,int amount);
void main(){
    int units,total_bill;
    printf("Enter units");
    scanf("%d",& units);

    if(units<=100){
        total_bill=units*10;
    }
    else if(units<=200){
        total_bill=units*15;
    }else{
         total_bill=units*20;
         }
    printf("total_bill is %d",total_bill);
}
int total_bill(int units,int amount){
    int total_bill;
    total_bill=units*amount;
    return total_bill;
}
