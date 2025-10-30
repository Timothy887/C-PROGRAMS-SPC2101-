/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A 2D ARRAY PROGRAM TO SHOW ROOM OCCUPANCY IN A HOTEL.
*/
#include <stdio.h>

int main() {
	int i, j;
    int occupancy[5][10] = {
        {1,0,1,0,1,0,0,1,1,0},
        {0,0,1,1,0,0,1,0,1,1},
        {1,1,0,0,1,1,0,0,0,1},
        {0,0,0,1,1,0,1,1,0,0},
        {1,0,1,0,1,1,0,0,1,0}
    };

    int occupied = 0, vacant = 0;

    printf("Occupancy of Hotel (5 floors x 10 rooms each):\n");
    for(i=0;i < 5; i++) {
        printf("%d ", i);
        for(j = 0; j < 10; j++) {
            printf("%d ", occupancy[i][j]);
            if(occupancy[i][j] == 1)
                occupied++;
            else if(occupancy[i][j] == 0)
                vacant++;
        }
        printf("\n");
    }

    printf("\nTotal occupied rooms: %d\n", occupied);
    printf("Total vacant rooms: %d\n", vacant);

    return 0;
}