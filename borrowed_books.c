/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
*/

#include<stdio.h>
int main(){

FILE *fptr;
char book_title[50];
//create a file

fptr=fopen("C:\\Users\\user\\Documents\\borrowed_book.txt","a");
//error
if(fptr==NULL){
    printf("error opening the file");
    return 1;
}
//input from the user
printf("enter book title:");
scanf("%s",&book_title);

//write user input to borrowed_books.txt
fprintf(fptr,"the book title is:%s\n",book_title);

//close the file
fclose(fptr);

printf("the results has been written to borrowed_book.txt\n");

return 0;}
