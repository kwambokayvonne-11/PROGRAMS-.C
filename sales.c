/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:c program to display the total sales for the day
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    float sale, total_sales = 0.0;

    fptr = fopen("C:\\Users\\user\\Documents\\sales.txt","r");
    if (fptr == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    while (fscanf(fptr, "%f", &sale) == 1) {
        total_sales += sale;
    }

    fclose(fptr);

    printf("Total sales of the day: %.2f\n", total_sales);

    return 0;
}
