/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:Program to check if student is eligible for final exams
*/
#include<stdio.h>

int main(){
    //variable declaration
    float attendance;
    int marks;

     //prompt the user to enter input
     printf("\nEnter attendance");
     scanf("%f",&attendance);

     printf("\nEnter marks");
     scanf("%d",&marks);

     if(attendance>=0.75&&marks >=40){
        printf("\nEligable");}
    else{
          printf("\nNot eligible");
    }


        return 0;


}
