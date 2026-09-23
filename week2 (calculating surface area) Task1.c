//Author:Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Description:Calculating surface area


#include <stdio.h>

int main(int argc, char** argv)
{
	float Height;//%f
	int Radius;//%d
	double volume;//%lf
	double surfacearea;//%lf
	const float pi = 3.14159;
	
	
	
	printf("Enter Height:\n");
	scanf("%f", &Height);
	
	printf("Enter Radius: \n");
	scanf("%d", &Radius);
	
	printf("calculate volume: \n");
	volume = pi * Radius * Radius * Height;
	
	printf("calculate surface area: \n");
	surfacearea = 2 * pi * Radius * Radius + 2 * pi * Radius * Height;
	
	printf("Height: %.2fm\n", Height);
	printf("Radius: %dm\n", Radius);
	printf("volume: %.2lfm^3\n", volume);
	printf("Surfacearea: %.2lfm^2", surfacearea);
	
	
	
	return 0;
}
