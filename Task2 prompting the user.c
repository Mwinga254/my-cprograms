#include <stdio.h>

int main()
{
	float height;//%f
	double bankbalance;//%lf
	int phonenumber;//%d
	
	printf("Enter your height:.\n");
	scanf("%f",&height);
	printf("Enter your bankbalance:ksh.\n");
	scanf("%lf",&bankbalance);
	printf("Enter your phonenumber:\n");
	scanf("%d",&phonenumber);
	
	printf("Height: %.2f m\n",height);
	printf("Bankbalance: ksh. %.2f\n", bankbalance);
	printf("Phonenumber: %d\n", phonenumber);
	
	return 0;
}