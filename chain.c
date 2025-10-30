/*
NAME: TIMOTHY MWENDIA NJOKI.
REG_NUMBER: PA106/G/29035/25
GROUP: Group B
DESCRIPTION: A 3D ARRAY PROGRAM TO SHOW ROOM OCCUPANCY IN THE BRANCHES OF A HOTEL.
*/
#include <stdio.h>

int main() {
	
	int i, j, k;
    // 3 branches, 5 floors each, 10 rooms per floor
    int rooms[3][5][10] = {
        {   // Branch 1
            {1,0,0,1,0,0,1,0,0,1}, // Floor 1
            {1,1,0,0,0,1,1,0,1,0}, // Floor 2
            {0,0,1,1,1,0,0,0,1,1}, // Floor 3
            {1,0,1,0,1,0,1,0,1,0}, // Floor 4
            {0,1,0,1,0,1,0,1,0,1}  // Floor 5
        },
        {   // Branch 2
            {0,1,1,0,0,0,1,1,0,0},
            {1,0,0,1,1,1,0,0,1,1},
            {0,0,1,0,1,0,1,0,1,0},
            {1,1,0,1,0,1,0,1,0,1},
            {0,1,0,0,1,0,1,0,1,0}
        },
        {   // Branch 3
            {1,1,1,0,0,1,1,0,0,1},
            {0,0,0,1,1,0,0,1,1,0},
            {1,0,1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0,1,0}
        }
    };

    int totalOccupied = 0;

    // Display occupancy and calculate total occupied rooms
    printf("Hotel room occupancy (1 = occupied, 0 = vacant):\n");
    for (i = 0; i < 3; i++) {
        printf("i %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  j %d: ", j + 1);
            for (k = 0; k < 10; k++) {
                printf("%d ", rooms[i][j][k]);
                if (rooms[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Total number of occupied rooms: %d\n", totalOccupied);

    return 0;
}