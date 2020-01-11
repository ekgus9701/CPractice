#include <stdio.h>
typedef struct birth{
	int year;
	int month;
	int day;
} Birth;

typedef struct subject{
	char title[100];
	char prof[50];
	char grade[3];
} Subject;

typedef struct student{
	char dept[100];
	char sid[10];
	int grade;
	char name[10];
} Student;


