/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:Program to find surface area by prompting the user
*/

#include<stdio.h>

int main (){
double radius,height,surface_area;
const double pi=3.14159;//Describe pi for calculation

//prompt the user for input
printf("Enter radius");
scanf("%lf",&radius);

printf("\nEnter  height");
scanf("%lf",&height);

//calculate the surface_area
surface_area='(2*pi*radius*radius)+(2*pi*radius*height)';

//display the calculated surface area
printf("surface_area of the cylinder is;%lf\n",surface_area);

return 0;

      }
