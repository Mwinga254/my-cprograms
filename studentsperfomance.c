#include <stdio.h>

int main(){
	FILE*fptr;
	int m1, m2, m3; 
	double Total_marks, average;
	
	fptr = fopen("C:\\Users\\JESSE\\OneDrive\\Desktop\\mwas\\studentperfomance.txt","w");
	
	if(fptr == NULL){
		printf("Error opening file\n");
		return 1;
		}
	
	printf("Enter three marks:");
	scanf("%d %d %d", &m1, &m2, &m3);
	
	Total_marks = m1 + m2 + m3;
	average = Total_marks/3 ;
	
    printf("Total_marks: %.2lf\n",Total_marks);
	printf("average: %.2lf\n", average);
	
	const char *result;
	if(average >= 50){
		 result = "passed";
	}
	else{
		 result = "failed";
		}
	
	printf("%s\n", result);
   fprintf(fptr, "%s\n", result);	
	

	fprintf(fptr,"%d\n %d\n %d\n",m1 ,m2 ,m3);
	fprintf(fptr,"%.2lf\n", Total_marks);
	fprintf(fptr,"%.2lf\n", average);
    fprintf(fptr, "%s\n", result);
	return 0;		
}
