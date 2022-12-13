#include <stdio.h>
#include <stdlib.h>


void struk_tiket(){
	int x;
	
	x = 200+rand()%900;
	system("cls");
	printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<<   STRUK TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  NOMOR TIKET    >  %d\t\t\t\t|\n", x);
    printf("\t\t\t|  NAMA PELANGGAN >  %d\t\t\t\t|\n");
	printf("\t\t\t|------------------------------------------------|\n");   
    printf("\t\t\t>> ");
}
