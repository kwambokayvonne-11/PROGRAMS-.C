/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:Program to display loan qualification
*/
#include<stdio.h>

int main(){
    //variable declaration
    int age;//%d
    float income;//%f

    //prompt the user to enter input
    printf("Enter your age:");
    scanf("%d",&age);

    printf("\nEnter your income:");
    scanf("%f",&income);

    if(age>=21 &&income>=21000)
        {
    printf("congratulations you qualify for a loan\n");

    }else
    {printf("unfortunately,we are unable to offer you a loan at this time\n");}


    return 0;

}
