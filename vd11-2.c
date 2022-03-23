#include <stdio.h>
#include <stdlib.h>

void main()
{
	int ary[10];
	int i,total,high;
	for(i=0;i<10;i++);
	{
		printf("\n enter value: %d :", i+1);
		scanf("%d",&ary[i]);
	}
	high = ary[0];
	for(i=1;i<10;i++)
	{
		if(ary[i]>high)
		high=ary[i];
	}
	for(i=0,total=0;i<10;i++)
		total=total+ary[i];
	printf("\nthe average of th elements of ary is %d", total/i);
}
