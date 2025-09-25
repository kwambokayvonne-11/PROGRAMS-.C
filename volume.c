/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:Program to find volume by prompting the user
*/

#include<stdio.h>

int main (){
double radius, height, volume;
const double pi=3.14159;//Define pi for calculation

//Prompt the user for input
printf("Enter radius");
scanf("%lf",&radius);

printf("\nEnter height");
scanf("%lf",&height);

//calculate  volume
volume=pi*radius*radius*height;

//display the calculated volume
printf("The volume of the cylinder is;%.2lf\n",volume);

return 0;
}
