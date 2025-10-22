/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:c program to convert fahrenheits to celsius
*/

#include<stdio.h>
float multiply(float f,int x);
void main(){
    float fahrenheits,result;

    printf("Enter tempreture in fahrenheits");
    scanf("%f",&fahrenheits);

    result=(fahrenheits-32)*5/9;
    printf("Tempereture in celsius is %f",result);
}
float multiply(float f,int x){
    float c;
    c=(f-32)*5/9;
    return c;
}
