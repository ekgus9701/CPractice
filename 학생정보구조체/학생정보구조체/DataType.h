#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct date{
	int year;
	int month;
	int day;
}Birth;

typedef struct subject{
	char title[100];
	char prof[100];
	char grade[3];
} Subject;

typedef struct student{
	int number;
	char name[100];
	Birth b;
	Subject s[6];
}STD;