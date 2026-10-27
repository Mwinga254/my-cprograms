#include <stdio.h>

int main(){
	double revenue[7];
	double total = 0.0;
	double average;
	int i;
	
	for( i = 0; i<7; ++i) {
		printf("Enter revenue for day %d:", i + 1);
		scanf("%lf",&revenue[i]);
		total += revenue[i];
	}
	average = total/7;
	
	printf("Total weekly revenue: %.2f\n", total);
	printf("Average daily revenue: %.2f\n",average);
	
	return 0;
}