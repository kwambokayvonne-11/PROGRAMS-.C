/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:c program to display selected mobile data bundle
*/

#include<stdio.h>
int main(){
int option;

printf("Mobile data bundles\n");
printf("1. 100MB 50KES\n");
printf("2. 500MB 200KES\n");
printf("3. 1GB 350KES\n");
printf("4. 2GB 600KES\n");

//prompt the user to enter option
printf("\nEnter option");
scanf("%d",&option);

//switch statement
switch(option){
case 1:
printf("you selected 100MB for 50KES\n");
break;
case 2:
printf("you selected 500MB for 200KES\n");
break;
case 3:
printf("you selected 1GB for 350KES\n");
break;
case 4:
printf("you selected 2GMB for 600KES\n");
break;
default:
printf("Invalid");

}
return 0;
}
