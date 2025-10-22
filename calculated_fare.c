/*
Nmae:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:c program to calculate fare
*/

#include<stdio.h>
float multiply(float kilometers,int amount);
void main(){
    float kilometers,amount, result;

    printf("Enter kilometers traveled");
    scanf("%f",&kilometers);

    result=kilometers*50;
    printf("your fare is %f",result);
}

float multiply(float kilometers,int amount){
   kilometers,amount;

   float fare;
   fare=kilometers*50;
   return fare;
   }
