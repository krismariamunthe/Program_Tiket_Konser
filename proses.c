#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cetak.c"

char phari[10]; //MENAMPUNG DATA HARI PEMBELIAN TIKET
char pclas[10]; //MENAMPUNG DATA CLASS TIKET
char nama[30], email[15], tlpn[15]; //MENAMPUNG DATA DIRI PEMBELI TIKET
int n; //BANYAK TIKET YANG DI BELI


void hari();
void pembelian();
void clas_tiket();
void pilih_hari();
void pilih_tiket();

void list_tiket(){
    int jenis;

kembali:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<    LIST TIKET    >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  JADWAL                                   |\n");
    printf("\t\t\t|  [2]  CLASS TIKET                              |\n");
    printf("\t\t\t|  [0]  BACK                                     |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t>> ");
    scanf("%d", &jenis);
    fflush(stdin);

    switch(jenis){
        case 1:
            system("cls");
            hari();
        break;
        case 2:
            system("cls");
            clas_tiket();
        break;
        case 0:
            system("cls");
            home_page();
        break;
        default :
            system("cls");
            printf("\t\t\t---------------------------------------------\n");
            printf("\t\t\t|               INPUTAN ERROR               |\n");
            printf("\t\t\t---------------------------------------------\n");
            system("pause");
            system("cls");
            goto kembali;

        break;
    }
}

void hari(){
    int pilihan;

kembali:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<   JADWAL TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|           HARI          |        MENU          |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [-]  JUMAT             |  [9]  HOME           |\n");
    printf("\t\t\t|  [-]  SABTU             |  [0]  BACK           |\n");
    printf("\t\t\t|  [-]  MINGGU            |                      |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  BELI TIKET   [1] YA   |||     [2]  TIDAK      |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  NOTE!!! UNTUK JAM KONSER DIMULAI PUKUL 18.00  |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t>> ");
    scanf("%d", &pilihan);
    fflush(stdin);

    switch(pilihan){
        case 1:
            system("cls");
            pembelian();
        break;
        case 2:
            system("cls");
            exit(0);
        break;
        case 0:
            system("cls");
            list_tiket();
        break;
        case 9:
            system("cls");
            home_page();
        break;
        default:
            system("cls");
            printf("\t\t\t---------------------------------------------\n");
            printf("\t\t\t|               INPUTAN ERROR               |\n");
            printf("\t\t\t---------------------------------------------\n");
            system("pause");
            system("cls");
            goto kembali;
        break;
    }
}

void pembelian(){

    system("cls");
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|             MASUKAN DATA DIRI ANDA             |\n");
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\tNama\n\t\t\t>> ");
    //nama = inputan();
     scanf("%s", &nama);
    printf("\t\t\tEmail\n\t\t\t>> ");
    //email = inputan();
    scanf("%s", &email);
    printf("\t\t\tNo HP\n\t\t\t>> ");
    scanf("%s", &tlpn);
    printf("\t\t\tJumlah tiket dibeli\n\t\t\t>> ");
    scanf("%d", &n);
    
    system("cls");
    pilih_tiket();
    system("cls");
    pilih_hari();
    // system("cls");
}


void clas_tiket(){
    int jenis;

kembali:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<<   HARGA TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|     TIKET     |    HARGA    |       MENU       |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [-]  VVIP    | Rp.500.000  |  [9]  HOME       |\n");
    printf("\t\t\t|  [-]  GOLD    | Rp.300.000  |  [0]  BACK       |\n");
    printf("\t\t\t|  [-]  SILVER  | Rp.150.000  |                  |\n");
    printf("\t\t\t|------------------------------------------------|\n");
	printf("\t\t\t|  BELI TIKET   [1] YA   |||     [2]  TIDAK      |\n");
    printf("\t\t\t|------------------------------------------------|\n");   
    printf("\t\t\t>> ");
    scanf("%d", &jenis);
    fflush(stdin);

	switch(jenis){
	case 1:
		pembelian();
	break;
	case 2:
		exit(0);
	break;
	case 0:
		list_tiket();
	break;
	case 9:
		home_page();
	break;
    default :
        system("cls");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t|               INPUTAN ERROR               |\n");
        printf("\t\t\t---------------------------------------------\n");
        system("pause");
        system("cls");
        goto kembali;
    break;
   	}
}


void pilih_hari(){
    int hari;
kembali:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<   JADWAL TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|                   PILIH HARI                   |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  JUMAT                                    |\n");
    printf("\t\t\t|  [2]  SABTU                                    |\n");
    printf("\t\t\t|  [3]  MINGGU                                   |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  NOTE!!! UNTUK JAM KONSER DIMULAI PUKUL 18.00  |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t>> ");
    scanf("%d", &hari);
    fflush(stdin);

    switch (hari){
    	case 1:
    		strcpy(phari, "Jum'at");
            struk_tiket(n, nama, email, tlpn, phari, pclas);
    	break;
    	case 2:
    		strcpy(phari, "Sabtu");
            struk_tiket(n, nama, email, tlpn, phari, pclas);
    	break;
    	case 3:
    		strcpy(phari, "Minggu");
            struk_tiket(n, nama, email, tlpn, phari, pclas);
    	break;
    	default:
    		system("cls");
	        printf("\t\t\t---------------------------------------------\n");
	        printf("\t\t\t|               INPUTAN ERROR               |\n");
	        printf("\t\t\t---------------------------------------------\n");
	        system("pause");
	        system("cls");
	        goto kembali;
    	break;
    }
}

void pilih_tiket(){
    int jenis;

kembali:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<<   HARGA TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|     TIKET              |    HARGA              |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  VVIP             |   Rp.500.000          |\n");
    printf("\t\t\t|  [2]  GOLD             |   Rp.300.000          |\n");
    printf("\t\t\t|  [3]  SILVER           |   Rp.150.000          |\n");
    printf("\t\t\t|------------------------------------------------|\n");  
    printf("\t\t\t>> ");
    scanf("%d", &jenis);
    fflush(stdin);

    switch (jenis)
    {
    case 1:
        strcpy(pclas, "VVIP");
    break;
    case 2:
        strcpy(pclas, "GOLD");
    break;
    case 3:
        strcpy(pclas, "SILVER");
    break;
    break;
    default :
        system("cls");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t|               INPUTAN ERROR               |\n");
        printf("\t\t\t---------------------------------------------\n");
        system("pause");
        system("cls");
        goto kembali;
    break;
    }
}
