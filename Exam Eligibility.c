//Author:Jesee Mwinga
//Adm No:BCS-05-0552/2026
//Descrption :Exam Eligibility

#include <stdio.h>

int main(){
	float Attedance, averageMarks;
	
	printf("Enter Attedance percentage:\n");
	scanf("%f", &Attedance);
	
	printf("Enter averageMarks:\n");
	scanf("%f", &averageMarks);
	
	if(Attedance >=75 && averageMarks >=40){
		printf("Eligible for final exams.f\n");
		
	}
	else {
		printf("Not eligble.f\n");
		
	}
	return 0;
}
	

