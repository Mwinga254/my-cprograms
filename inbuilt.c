# include <stdio.h>
#include <math.h>

int main(){
	FILE * fptr;
	double length, width, Diagonal;
	double length_squared, width_squared;
	
	fptr = fopen("C:\\Users\\JESSE\\OneDrive\\Desktop\\mwas\\inbuilt.txt","w");
	
	if(fptr == NULL){
		printf("Error opening file\n");
		return 1;
		}
		printf("Enter length\n");
		scanf("%lf", &length);
		
		printf("Enter width\n");
		scanf("%lf", &width);
		
		length_squared = pow(length,2);
		width_squared  = pow(width,2);
		Diagonal = sqrt(length_squared + width_squared);
		
		
		printf("Length squared: %.2lf m\n", length_squared);
        printf("Width squared: %.2lf m\n", width_squared);
        printf("Diagonal: %.2lf m\n", Diagonal);
        
        fprintf(fptr,"%.2lf m\n",length);
		fprintf(fptr, "%.2lf m\n", width);
		fprintf(fptr, "%.lf m\n", length_squared);
		fprintf(fptr, "%.2lf m\n", width_squared);
		fprintf(fptr, "%.2lf m\n", Diagonal);
		fclose(fptr);
		
		//the sqrt gives the squareroot of length_squared and width_squared
	return 0;
	
}