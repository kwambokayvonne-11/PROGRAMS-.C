/*
Name:Yvonne  Kwamboka
Reg No:PA106/G/28782/25
Description:Program to display total water bills
*/
#include<stdio.h>

int main(){
    int units;//%d
    float total_bill;//%f


    printf("\nEnter units");
    scanf("%d",&units);


    if(units>=0 &&units<=30){

    total_bill= units * 20;
    }
     else if(units>=31 &&units<=60){
        total_bill= units * 25;
    }
    else if(units>60){
        total_bill= units * 30;
    }

    printf("total_bill is KES %.2f",&total_bill);


    return 0;
}
