# include <stdio.h>

int main(void){
	int age; 
	
	printf("Enter age\n");
	scanf("%d", &age);
	
	if(age >=18){
		printf("qualifies to take id\n");
	}	
	else{
		printf("does not qualify");

	}
	
	return 0;
}