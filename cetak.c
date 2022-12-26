#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x;
time_t waktu;

void cetak_tiket(int n, char nama[30],char email[15], int tlpn, char phari[10], char pclas[10]);
void beli(int n);

void struk_tiket(int n, char nama[30], char email[15], int tlpn, char phari[10], char pclas[10]){
	
    int i;

	system("cls");
    beli(n);
    for(i = 1; i<=n;i++){
        x = 200+rand()%900;
        printf("\t\t\t--------------------------------------------------\n");
        printf("\t\t\t|<<<<<<<<<<<<<<<<   STRUK TIKET   >>>>>>>>>>>>>>>|\n");
        printf("\t\t\t|------------------------------------------------|\n");
        printf("\t\t\t|                                                |\n");
        printf("\t\t\t|  NOMOR TIKET    >  %d\t\t\t |\n", x);
        printf("\t\t\t|  CLASS TIKET    >  %s\t\t\t |\n", pclas);
        printf("\t\t\t|  DAY            >  %s\t\t\t |\n", phari);
        printf("\t\t\t|                                                |\n");
        printf("\t\t\t|------------------------------------------------|\n");   
        printf("\t\t\t|  NOTE!!! UNTUK JAM KONSER DIMULAI PUKUL 18.00  |\n");
        printf("\t\t\t|------------------------------------------------|\n\n\n");
        cetak_tiket(n, nama, email, tlpn, phari, pclas);
    }
}

void beli(int n){
    FILE* file=fopen("tiket terjual.txt", "r");
    int nilai, hasil;

    fscanf(file,"%d", &nilai);
    fclose(file);

    FILE* file2=fopen("tiket terjual.txt", "w");
    hasil = nilai + n;
    fprintf (file2,"%d", hasil);
    fclose(file2);
}

void cetak_tiket(int n, char nama[30],char email[15], int tlpn, char phari[10], char pclas[10]){
	FILE* tiket=fopen("struk tiket.txt", "a+");
	
	time(&waktu);

	fprintf(tiket,"\t\t\t--------------------------------------------------\n");
    fprintf(tiket,"\t\t\t|<<<<<<<<<<<<<<<<   STRUK TIKET   >>>>>>>>>>>>>>>|\n");
    fprintf(tiket,"\t\t\t|------------------------------------------------|\n");
    fprintf(tiket,"\t\t\t|  NOMOR TIKET    >  %d\t\t\t\t\t\t|\n", x);
    fprintf(tiket,"\t\t\t|  CLASS TIKET    >  %s\t\t\t\t\t\t|\n", pclas);
    fprintf(tiket,"\t\t\t|  DAY            >  %s\t\t\t\t\t\t|\n", phari);
    fprintf(tiket,"\t\t\t|  NAMA PELANGGAN >  %s\t\t\t\t\t\t|\n", nama);
    fprintf(tiket,"\t\t\t|  NOMOR TELEPON  >  %d\t\t\t\t\t\t|\n", tlpn);
    fprintf(tiket,"\t\t\t|  EMAIL          >  %s\t\t\t\t\t\t|\n", email);
    fprintf(tiket,"\t\t\t|  DATE PEMBELIAN >  %s\t\t\t\t|\n", ctime (&waktu));
	fprintf(tiket,"\t\t\t|------------------------------------------------|\n\n");   
}

