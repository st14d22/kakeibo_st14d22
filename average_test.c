#include<stdio.h>
#include "average.h"

int main(void)
{	
	int payments[5] = {1, 2, 3, 4, 5};
	if(average(payments) == 3) {
		printf("test successed\n");
	}else{
		printf("test failed\n");
	}
return 0;
}
