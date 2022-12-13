#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cetak.c"

char phari[10];
char nama[30], email[15], tlpn[15];
int tiket = 0, clas = 0;


void hari();
void pembelian();
void clas_tiket();
void pilih_hari();

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
            tiket = 1;
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
    
    if(clas > 0){
    	system("cls");
    	struk_tiket();
	}else{
		system("cls");
		clas_tiket();
	}

}


void clas_tiket(){
    int jenis;

kembali:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<<   HARGA TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|     TIKET     |    HARGA    |       MENU       |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  VVIP    | Rp.500.000  |  [9]  HOME       |\n");
    printf("\t\t\t|  [2]  GOLD    | Rp.300.000  |  [0]  BACK       |\n");
    printf("\t\t\t|  [3]  SILVER  | Rp.150.000  |                  |\n");
    printf("\t\t\t|------------------------------------------------|\n");   
    printf("\t\t\t>> ");
    scanf("%d", &jenis);
    fflush(stdin);

	if(tiket > 0){
	    switch (jenis)
	    {
	    case 1:
	    case 2:
	    case 3:
	        system("cls");
	        pilih_hari();
	        system("cls");
	        clas = 1;
	        pembelian();
	    break;
	    case 9:
	        system("cls");
	        home_page();
	    break;
	    case 0:
	        system("cls");
	        list_tiket();
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
	}else{
		system("cls");
		pilih_hari();
		struk_tiket();
	}
}


void pilih_hari(){
    int hari;
kembali:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<   JADWAL TIKET   >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|           HARI          |        MENU          |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  JUMAT             |  [9]  HOME           |\n");
    printf("\t\t\t|  [2]  SABTU             |  [0]  BACK           |\n");
    printf("\t\t\t|  [3]  MINGGU            |                      |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  NOTE!!! UNTUK JAM KONSER DIMULAI PUKUL 18.00  |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t>> ");
    scanf("%d", &hari);
    fflush(stdin);

    switch (hari){
    	case 1:
    		strcpy(phari, "Jum'at");
    	break;
    	case 2:
    		strcpy(phari, "Sabtu");
    	break;
    	case 3:
    		strcpy(phari, "Minggu");
    	break;
    	case 0:
    		clas_tiket();
    	break;
    	case 9:
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
