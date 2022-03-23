#include <stdio.h>
#include <stdlib.h>

void main()
{
	char ary[5];
	int i;
	
	printf("\nenter string :");
	scanf("%s",ary);
	printf("\nthe string is %s \n\n", ary);
	for(i=0;i<5;i++)
		printf("\t%d", ary[i]);
}
