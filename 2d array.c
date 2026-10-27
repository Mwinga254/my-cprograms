#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	const int floor =5;
	const int rooms =10;
	
	int occupancy[5][10];
	srand((unsigned int)time(NULL));
	int i;
	int j;
	for(i = 0; i < floor; ++i){
		for (j =0; j< rooms; ++j){
			occupancy[i][j] = rand() %2;
			
		}
	}
	
	for (i =0;i<floor;++i){
		int occupied = 0;
		
		for (j =0;j <10;++j){
			occupied += occupancy[i][j];
			
		}
		int vacant = 10 - occupied;
		printf("floor %d: %d occupied, %d vacant\n",i + 1, occupied, vacant);
	
		
	}	
return 0;	
}