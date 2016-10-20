#include<stdio.h>
#include"sum.h"

int sum(int payments[]){
	int result,i;
	for(i=0;i<5;i++){
	result += payments[i]; 
	}
	return result;
}
