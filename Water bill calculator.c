//Author : Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Descrption: Water bill calculator

/*
program to calculate customer charges
units between 0 and 30,KES 20 * number of units
units between 31 and 60,KES 25 * number of units
units >60 ,KES 30 * number of units
*/

#include <stdio.h>

int main(){
	 float Total_water_bill, charge, waterunits;
	
	printf("Enter waterunits:");
	scanf("%f", &waterunits);
	
	if (waterunits>=0 && waterunits <=30){
	charge = 20;
	Total_water_bill = waterunits * charge;
		
	}
	else if (waterunits>=31 && waterunits<=60) {
		charge =25;
		Total_water_bill = waterunits * charge;
		
	}
	else {
		charge =30;
		Total_water_bill = waterunits * charge;
		
	}
	printf("Total_water_bill: KES %.2f\n",Total_water_bill);
	
	return 0;
	
}
