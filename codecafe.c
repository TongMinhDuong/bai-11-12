#include <stdio.h>
#include <stdlib.h>

void main()
{
	int cf1,cf2,cf3,sl,tongtien,lc,tien1,tien2,tien3;
	char ch;
	cf1 = 15000;
	cf2 = 35000;
	cf3 = 50000;
	tongtien = 0;
	tien1 = 0;
	tien2 = 0;
	tien3 = 0;
	
	
	printf("Tra chanh 15k an phim 1.\n");
	printf("Bac xiu 35k an phim 2.\n");
	printf("Sinh to hoa qua 50k an phim 3.\n");
	do
	{
		printf("Lua chon do uong : ");
		scanf("%d", &lc);
		switch(lc)
		{
			case 1 :
			{
				printf("nhap so luong : ");
				scanf("%d", &sl);
				tien1=sl*15000;	
				printf("%d tra tranh het %d vnd\n\n", sl,tien1);	
			}break;
			
			case 2 :
			{
				printf("nhap so luong : ");
				scanf("%d", &sl);
				tien2 = sl * 35000;
				printf("%d bac xiu het %d vnd\n\n", sl,tien2);
			}break;
			
			case 3 :
			{
				printf("nhap so luong : ");
				scanf("%d", &sl);
				fflush(stdin); 
				tien3=sl*50000;
				printf("%d sinh to hoa qua het %d vnd\n\n",sl,tien3);
			}break;
		}
		
			printf("ban co muon tiep tuc oder Y\\N : \n\n");
			fflush(stdin); 
			scanf("%c", &ch);	
	}while(ch=='Y'&&ch!='N');
			
				tongtien = tien1 + tien2 + tien3;
				printf("tong tien can thanh toan la %d vnd\n\n", tongtien);
				printf("Chuc quy khach ngon mieng.");
			
}
	
