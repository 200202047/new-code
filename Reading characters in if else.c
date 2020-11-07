#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	int number;
	double gpa;
};
	
int main () {
	
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy( student1.name, "Jim");
	strcpy( student1.major, "Business");
	student1.number= 11;
	
	struct Student student2;
	student2.age=20;
	student2.gpa=2.5;
	strcpy(	student2.name, "Pam");
	strcpy(	student2.major, "Art");
	student1.number= 22;
	
	struct Student student3;
	student3.age=20;
	student3.gpa=5.0;
	strcpy(	student3.name, "Hasan Sabbah");
	strcpy(	student3.major, "Engineer");
	student1.number= 45;
	
	struct Student student4;
	student4.age=20;
	student4.gpa=4.7;
	strcpy(	student4.name, "Zeynep Asli");
	strcpy(	student4.major, "Cyber security");
	student4.number= 55;
	
	
	/* int student;
	scanf("%d",&student);
	
		if(student==11){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student1.name,student1.age,student1.gpa,student1.major);
		}
		else if(student==22){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student2.name,student2.age,student2.gpa,student2.major);
		}
		else if(student==45){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student3.name,student3.age,student3.gpa,student3.major);
		}
		else if(student==55){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student4.name,student4.age,student4.gpa,student4.major);
		}
		else{
			printf("olmadi..");
		} */
		
	char student[20];
	scanf("%s",&student);
	
		if(strcmp(student, "Jim")==0){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student1.name,student1.age,student1.gpa,student1.major);
		}
		else if(strcmp(student, "Pam")==0){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student2.name,student2.age,student2.gpa,student2.major);
		}
		else if(strcmp(student, "Hasan")==0){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student3.name,student3.age,student3.gpa,student3.major);
		}
		else if(strcmp(student, "Asli")==0){
			printf("Name:%s \nAge:%d \nGPA:%f \nMajor:%s",student4.name,student4.age,student4.gpa,student4.major);
		}
		else{
			printf("olmadi..");
		}
		
			
		
		/*switch(student){
			case "Jim":
				printf("Age:%d \nGPA:%d \nMajor:%s",student1.age,student1.gpa,student1.major);
			default:
				printf("olmadi..");
			
		} */
		
	
	return 0;
}

