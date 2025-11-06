/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Deascrion:2D_array to display occupied and vacant room per floor
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int floor,room;
    int occupancy[5][10];
    int occupied,vacant;

    srand(time(0));

    for(floor=0;floor<5;floor++){
    for(room=0;room<10;room++){
        occupancy[floor][room]=rand()%2;

    }}
    printf("occupancy(1=occupied,0=vacant)\n\n");

    for(floor=0;floor<5;floor++){occupied=vacant=0;
    printf("floor %d:",floor+1);

    for(room=0;room<10;room++){
        printf("%d",occupancy[floor][room]);
        if(occupancy[floor][room]==1)
            occupied++;
        else
            vacant++;
    }
    printf("\nocccupied:%d | vacant:%d\n\n",occupied, vacant);
    }

return 0;}
