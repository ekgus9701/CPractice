#include<stdio.h>
int main(){
	int m;
	int n;
	int kind=0;
	int total=0;
	int change;
	scanf("%d",&m);
	scanf("%d",&n);
	change=m-n;
	if(change/50000!=0){
		kind+=1;
		total+=change/50000;
		change%=50000;
	}
	
	if(change/10000!=0){
		kind+=1;
		total+=change/10000;
		change%=10000;
	}
	
	if(change/5000!=0){
		kind+=1;
		total+=change/5000;
		change%=5000;
	}
	
	if(change/1000!=0){
		kind+=1;
		total+=change/1000;
		change%=1000;
	}
	
	if(change/500!=0){
		kind+=1;
		total+=change/500;
		change%=500;
	}
	
	if(change/100!=0){
		kind+=1;
		total+=change/100;
		change%=100;
	}
	
	if(change/50!=0){
		kind+=1;
		total+=change/50;
		change%=50;
	}
	
	if(change/10!=0){
		kind+=1;
		total+=change/10;
		change%=10;
	}
	printf("%d %d",kind,total);
}
	