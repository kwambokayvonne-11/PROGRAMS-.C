/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:Program to prompt the user to enter and display his information
*/

 #include<stdio.h> //scanf(),printf()
 //main function
 int main(){

     //variable declaration and initialization
     float height;//%f
     int ID_NO;//%d
     double Bank_balance;//%lf

     //user prompts
     printf("\nEnter height:");
     scanf("%f",&height);

     printf("\nEnter ID_NO:");
     scanf("%d",&ID_NO);

     printf("\nEnter Bank_balance:");
     scanf("%lf",&Bank_balance);

    printf("The height is %f, height ");
    printf("The ID_NO is %d, ID_NO ");
    printf("The Bank_balance is %lf, Bank_balance");

    return 0;
 }
