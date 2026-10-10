//author:Jesee Mwinga
//Reg No: BCS-05-0552/2026
//Description: Diagonal length

//program to calculate diagonal length of a rectangular window

#include <stdio.h>
#include <math.h>


int main(){
	float length, width,diagonal,length_squared,width_squared;
	
	printf("Enter the length of the window :\n");
	scanf("%f", &length );
	
	printf("Enter the width of the window:\n");
	scanf("%f", &width);
	
	length_squared= pow(length,2);
	width_squared= pow(width,2);
	
	diagonal= sqrt(length_squared + width_squared);
	
	printf("length_squared: %.2f\n",length_squared);
	printf("width_squared: %.2f\n",width_squared);
	printf("Diagonal: %.2f\n",diagonal);
	
	return 0;
}	
	
