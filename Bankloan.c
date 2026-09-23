//Author : Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Descrption :bank loan

#include <stdio.h>

int main(){
	float age,annualincome;
	
	printf("Enter your age:\n");
	scanf("%f",&age);
	
	printf("Enter your annualincome:\n");
	scanf("%f",&annualincome);
	
	if(age>=21 && annualincome>=21000){
		printf("congratulations you qualify for a loan:\n");
		
		}
	else {
		printf("unfortunately,we are unable to offer you a loan at this time");
		
	}	

	return 0;
}