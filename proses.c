#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cetak.c"

char phari[10]; //MENAMPUNG DATA HARI PEMBELIAN TIKET
char pclas[10]; //MENAMPUNG DATA CLASS TIKET
char nama[30], email[15];
int tlpn; //MENAMPUNG DATA DIRI PEMBELI TIKET
int n; //BANYAK TIKET YANG DI BELI
int harga_tiket; //HARGA TIKET


void hari();
void pembelian();
void clas_tiket();
void pilih_hari();
void pilih_tiket();
void pembayaran();
int cek();

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
            user();
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
            user();
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
    scanf("%[^\n]", &nama);
    fflush(stdin);
    printf("\t\t\tEmail\n\t\t\t>> ");
    scanf("%s", &email);
    printf("\t\t\tNo HP\n\t\t\t>> ");
    tlpn = cek();
    printf("\t\t\tJumlah tiket dibeli\n\t\t\t>> ");
    scanf("%d", &n);
    
    system("cls");
    pilih_tiket();
    system("cls");
    pilih_hari();
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
		user();
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
            pembayaran();
            //struk_tiket(n, nama, email, tlpn, phari, pclas);
    	break;
    	case 2:
    		strcpy(phari, "Sabtu");
            pembayaran();
            // struk_tiket(n, nama, email, tlpn, phari, pclas);
    	break;
    	case 3:
    		strcpy(phari, "Minggu");
            pembayaran();
            // struk_tiket(n, nama, email, tlpn, phari, pclas);
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
        harga_tiket = 500000;
        strcpy(pclas, "VVIP");
    break;
    case 2:
        harga_tiket = 300000;
        strcpy(pclas, "GOLD");
    break;
    case 3:
        harga_tiket = 150000;
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

void pembayaran(){
    int jumlah, bayar, kembalian, pilihan;

    jumlah = n * harga_tiket;

b1:
    system("cls");
    printf("\t\t\t--------------------------------\n");
    printf("\t\t\t|Jumlah Pembayaran >> %d |\n", jumlah);
    printf("\t\t\t--------------------------------\n");
    printf("\t\t\tBayar\n\t\t\t>> ");
    bayar = cek();
    
    if(bayar > jumlah){
        kembalian = bayar - jumlah;
        printf("\t\t\t--------------------------------\n");
        printf("\t\t\t|Jumlah Kembalian >> %d |\n", kembalian);
        printf("\t\t\t--------------------------------\n");
    }else{
        printf("\t\t\t--------------------------------\n");
        printf("\t\t\t|       UANG ANDA KURANG       |\n");
        printf("\t\t\t--------------------------------\n");
        system("pause");
        system("cls");
        goto b1;
    }

b2:
    
    printf("\t\t\t--------------------------------\n");
    printf("\t\t\t|      CETAK TIKET KONSER      |\n");
    printf("\t\t\t--------------------------------\n");
    printf("\t\t\t|  [1] IYA     ||  [2] TIDAK   |\n");
    printf("\t\t\t--------------------------------\n");
    pilihan = cek();

    if(pilihan = 1){
        struk_tiket(n, nama, email, tlpn, phari, pclas);
    }else if(pilihan = 2){
        exit(0);
    }else{
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t|               INPUTAN ERROR               |\n");
        printf("\t\t\t---------------------------------------------\n");
        system("pause");
        system("cls");
        goto b2;
    }

}

int cek(){
    int angka;
    char karekter;

    if(scanf("\t\t\t%d%c", &angka,&karekter)!=2 || angka < 1 || karekter != '\n'){
	    fflush(stdin);
        // system("cls");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t|               INPUTAN ERROR               |\n");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t>> ");
        return cek();
    }else{
        return angka;
    }
}
