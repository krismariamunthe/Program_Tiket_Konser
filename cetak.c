#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x;
time_t waktu;

void struk_tiket(){
	
	x = 200+rand()%900;
	system("cls");
	printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<<   STRUK TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|                                                |\n");
    printf("\t\t\t|  NOMOR TIKET    >  %d\t\t\t|\n", x);
    printf("\t\t\t|                                                |\n");
	printf("\t\t\t|------------------------------------------------|\n");   
    printf("\t\t\t|  NOTE!!! UNTUK JAM KONSER DIMULAI PUKUL 18.00  |\n");
    printf("\t\t\t|------------------------------------------------|\n");
}

void cetak_tiket(char nama[30],char email[15], char tlpn[15]){
	FILE* tiket=fopen("struk tiket.txt", "w+");
	
	time(&waktu);
	fprintf(tiket,"\t\t\t--------------------------------------------------\n");
    fprintf(tiket,"\t\t\t|<<<<<<<<<<<<<<<<   STRUK TIKET   >>>>>>>>>>>>>>>|\n");
    fprintf(tiket,"\t\t\t|------------------------------------------------|\n");
    fprintf(tiket,"\t\t\t|  NOMOR TIKET    >  %d\t\t\t\t|\n", x);
    fprintf(tiket,"\t\t\t|  NAMA PELANGGAN >  %s\t\t\t\t|\n", nama);
    fprintf(tiket,"\t\t\t|  NOMOR TELEPON  >  %s\t\t\t\t|\n", tlpn);
    fprintf(tiket,"\t\t\t|  EMAIL          >  %s\t\t\t\t|\n", email);
    fprintf(tiket,"\t\t\t|  EMAIL          >  %s\t\t|\n", ctime (&waktu));
	fprintf(tiket,"\t\t\t|------------------------------------------------|\n");   
    fprintf(tiket,"\t\t\t>> ");
}
