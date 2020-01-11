#include<stdio.h>
#include "DataType.h"



int main(void){
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;

	STD stu[20];
	int i=0,j=0,n;

	fp1=fopen("C:\\Users\\lg\\Desktop\\sample.txt","r");
	fp2=fopen("C:\\Users\\lg\\Desktop\\result.txt","w");

	if(fp1 == NULL){
		printf("파일열기실패\n");
		exit(1);
	}

	printf("C:\\Users\\lg\\Desktop\\sample.txt 파일을 읽어오고있습니다...\n");
	while(!feof(fp1)){
		fscanf(fp1,"%d",&stu[j].number);
		fscanf(fp1,"%s",stu[j].name);
		fscanf(fp1,"%d",&stu[j].b.year);
		fscanf(fp1,"%d",&stu[j].b.month);
		fscanf(fp1,"%d",&stu[j].b.day);
		for(i=0; i<5; i++){
		fscanf(fp1,"%s",stu[j].s[i].title);
		fscanf(fp1,"%s",stu[j].s[i].prof);
		fscanf(fp1,"%s",stu[j].s[i].grade);}
		j++;
	}
	n=j-1;

	printf("C:\\Users\\lg\\Desktop\\result.txt 파일에 저장합니다...\n");
	for(i=0;i<n;i++){
		fprintf(fp2,"%d번 학번:%d 이름:%s 생년:%d 생월:%d 생일:%d \n",i,stu[i].number,stu[i].name,stu[i].b.year,stu[i].b.month,stu[i].b.day);
			for(j=0;j<5;j++){
				 fprintf(fp2,"과목:%s 교수명:%s 학점:%s \n",stu[i].s[j].title,stu[i].s[j].prof,stu[i].s[j].grade);
			}
			fprintf(fp2,"############################\n");
	}
	fclose(fp1); 
    fclose(fp2); 
    return 0;
} 








	

	