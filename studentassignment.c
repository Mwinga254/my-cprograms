#include <stdio.h>
#include <string.h>

void saveStudent();
void displayStudents();
void addStudent();



int main(void){
	
	saveStudent();
	displayStudents();
	addStudent();
	void displayStudents();
	
	return 0;
}

void saveStudent(){
	FILE*fptr;
	char name[30];
	char course[40];
	char admission_number[25];
	
	fptr = fopen("C:\\Users\\JESSE\\OneDrive\\Desktop\\mwas\\students.txt","w");
	if(fptr == NULL){
		printf("Error opening file:");
		return ;
	}
	printf("Enter name:");
	fgets(name, sizeof(name),stdin);
	name[strcspn(name, "\n")] = '\0';
	
	printf("Enter course:");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = '\0';
	
	printf("Enter admission_number:");
	fgets(admission_number, sizeof(admission_number), stdin);
    admission_number[strcspn(admission_number, "\n")] = '\0';
	
	
	fprintf(fptr, "name: %s\n" , name);
	fprintf(fptr,"course: %s\n", course);
	fprintf(fptr, "admission_number: %s\n", admission_number);
	fclose(fptr);	
}
void displayStudents(){
	FILE*fptr;
	
	fptr = fopen("C:\\Users\\JESSE\\OneDrive\\Desktop\\mwas\\students.txt","r");
	if (fptr == NULL){
	printf("Error opening file:");
    return;
		
	}
	printf("\n--- Student Records ---\n");
	int ch;
	while ((ch = fgetc(fptr)) != EOF){
		putchar(ch);
	}
	printf("--------------\n\n");
	
	fclose(fptr);

}
void addStudent(){
	
    char admission_number[25], name[30], course[40];

    FILE *fptr; 
	fptr = fopen("C:\\Users\\JESSE\\OneDrive\\Desktop\\mwas\\students.txt", "a");
	
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    printf("Enter admission number: ");
    fgets(admission_number,25, stdin);
    admission_number[strcspn(admission_number, "\n")] = '\0';

    printf("Enter full name: ");
    fgets(name, 30, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter course: ");
    fgets(course, 40, stdin);
    course[strcspn(course, "\n")] = '\0';

    fprintf(fptr, "%s, %s, %s\n", admission_number, name, course);
    fclose(fptr);
}   
