//Author : Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Descrption :Discount computation

/*
program to compute discount
amount>=10,000,10% discount
amount between 5,000 and 10,000 =5%

*/

#include <stdio.h>
int main(){
	
	float amount, discount, amounttopay;
	printf("enter the amount purchase:\t");
	scanf("%f",&amount);	
	
	if(amount>=10000){
		discount=0.1*amount;
		amounttopay=amount-discount;
		printf("discount=%.2f\n",discount);
		printf("amounttopay=%.2f\n",amounttopay);
		
	}
	else if(amount >=5000 &&amount<10000){
	discount=0.05*amount;
    amounttopay=amount-discount;
    printf("discount=%.2f\n",discount);
    printf("amounttopay=%.2f\n",amounttopay);
	}
    else{
    printf("No discout");
	}
	return 0;
}	