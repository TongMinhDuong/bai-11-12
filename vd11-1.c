#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num[5];
	int i;
	num[0] = 10;
	num[1] = 70;
	num[2] = 60;
	num[3] = 40;
	num[4] = 50;
	for(i=0;i<5;i++)
		printf("\nSo thu [%d] la %d",i,num[i]);
}
