//Author : Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Descrption: library overdue

/*program to calculate fine of overdue books
days overdue <=7, ksh20 * number of days overdue
days overdue between 8 and 14 ,ksh50 * number of days overdue
days overdue >=15, ksh100 * number of days overdue

*/

#include <stdio.h>

int main(){
	int BookID,	dueDate, returnDate, daysOverdue, fineRate, fineAmount;
	printf("Enter BookID:\n");
	scanf("%d",&BookID);
	
	printf("Enter dueDate:\n");
	scanf("%d",&dueDate);
	
	printf("Enter returnDate:\n");
	scanf("%d",&returnDate);
	
	//calculate days overdue
	daysOverdue = returnDate - dueDate;
	
	if (daysOverdue <= 7) {
		fineRate = 20;
		fineAmount = daysOverdue * fineRate;
	}
	else if(daysOverdue >=8 && daysOverdue<14){
		fineRate =50;
		fineAmount = daysOverdue* fineRate;
		
	}
	else{
		fineRate = 100;
		fineAmount = daysOverdue * fineRate;
	}
	
	printf("daysOverdue=%d\n",daysOverdue);
	printf("fineAmount=%d\n",fineAmount);
	printf("fineRate=%d\n",fineRate);
	
	return 0;

}
			
			

		
	
	
	
	
	
	


