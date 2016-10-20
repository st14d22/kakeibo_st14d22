#include<stdio.h>
#include "average.h"

int average(int payments[])
{	
	int i, sum;
	for(i = 0;i < 5;i++) {
		sum += payments[i];
	}
	
	return (sum / 5);
}
