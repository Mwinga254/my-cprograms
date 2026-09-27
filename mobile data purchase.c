//Author : Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Descrption : Mobile data purchase

#include <stdio.h>

int main(){
	int choice;
	
	//Display menu
	printf("Mobile Data Bundles\n");
	printf("---------------------\n");
	printf("1. 100 MB  - KES 50\n");
	printf("2. 500 MB  - KES 200\n");
	printf("3.1 GB     - KES 350\n");
	printf("4.2 GB     - KES 600\n");
	
	// Ask for choice
	printf("\nEnter your choice (1-4); ");
	scanf("%d", &choice);
	
	//process choice
	switch (choice){
		case 1:
			printf("Bundle selected: 100MB\n");
			printf("cost: KES 50\n");
			break;
		case 2:
			printf("Bundle selected: 500 MB\n");
			printf("cost: KES 200\n");
			break;
		case 3:
			printf("Bundle selected: 1 GB\n");
			printf("cost: KES 350\n");
			break;
		case 4:
			printf("Bundle selected: 2 GB\n");
			printf("cost: KES 600\n");
			break;
		default:
			printf("invalid choice\n");
			
	}
	
	return 0;
	
	
	
}
