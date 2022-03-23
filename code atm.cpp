#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a=0,pin=123,mypin,c,tien;
	char ch; 
	int i; 

	int sodu = 10000000;
	
	printf("Nhap ma pin : ");
	
	do
	{
		scanf("%d",&mypin);	
		a++; 
	}while(mypin != pin && a<3);
		printf("login thanh cong");
	if(mypin==pin)
	{	
	do{
	
		printf("Vui long chon giao dich:\n");
		printf("Chon 1 de rut tien:\n");
		printf("Chon 2 de xem so du:\n");
		printf("Chon 3 de huy giao dich:\n");
		scanf("%d",&i);
	
		switch(i)
		{
			case 1 :
				
				printf("Nhap so tien muon rut:\n");
				do
				{
					scanf("%d",&tien);
				}
				while(tien > sodu);
				if(tien<=sodu)
				{
					printf("Rut tien thanh cong!\n");
					sodu-=tien;									
				}
				break;	
						
			case 2 	:	
				printf("So du hien tai la: %d\n", sodu);	
				break;
				
			case 3 :				
					printf("ket thuc giao dich.\n");				
				break;
					
		}printf("Ban co muon tiep tuc giao dich Y\\N :");
		fflush(stdin); 
			scanf("%c", &ch);
					
	}while(ch == 'y'||ch=='Y');
	}
		
	else	
		printf("Nhap qua 3 lan, khoa the!");
 		
 			
}
