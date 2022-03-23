#include <stdio.h>
#include <stdlib.h>

void main()
{
	char alpha[26];
	int i,j;
	
	for(i=65,j=0;i<91;i++,j++)
	{
		alpha[j] = i;
		printf("the character now assingned is %c \n", alpha[j]);
	}
	getchar();
}
