#include <stdio.h>
#include <stdlib.h>
#include "proses admin.c"

void info();
void kembali2();
void lihat_stok();

//  int main(){
//      halaman_admin();
//  return 0;
//  }

void halaman_admin() {
    int pilihan;

    kembali1:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<    MENU UTAMA    >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  DATA PEMBELIAN TIKET                     |\n");
    printf("\t\t\t|  [2]  JUMLAH TIKET TERJUAL                     |\n");
    printf("\t\t\t|  [3]  STOK TIKET                               |\n");
    printf("\t\t\t|  [0]  EXIT                                     |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t>> ");
    pilihan = inputan();
    fflush(stdin);

    switch(pilihan){
        case 0: 
            exit(0);
        break;
        case 1: 
            system("cls");
            data_tiket();
            kembali2();
        break;
        case 2:
            system("cls");
            tiket_jual();
            kembali2();
        break;
        case 3:
            system("cls");
            lihat_stok();
            kembali2();
        break;
        default :
            system("cls");
            printf("\t\t\t---------------------------------------------\n");
            printf("\t\t\t|               INPUTAN ERROR               |\n");
            printf("\t\t\t---------------------------------------------\n");
            system("pause");
            system("cls");
            goto kembali1;
        break;
    }
}

void kembali2(){
    int kembali;
c2:
    printf("\n\n\t\t\t================================\n");
    printf("\t\t\t|     KEMBALI KE MENU UTAMA?   |\n");
    printf("\t\t\t================================\n");
    printf("\t\t\t|  [1] IYA      |  [2] TIDAK   |\n");
    printf("\t\t\t================================\n");
    printf("\t\t\t>> ");
    kembali = inputan();

    if(kembali == 1) {
        halaman_admin();
    }else if(kembali == 2) {
        exit(0);
    }else{
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t|               INPUTAN ERROR               |\n");
        printf("\t\t\t---------------------------------------------\n");
        system("pause");
        system("cls");
        goto c2;
    }
}

int inputan(){
    int angka;
    char karekter;

    if(scanf("%d%c", &angka,&karekter)!=2 || angka < 1 || karekter != '\n'){
	    fflush(stdin);
        system("cls");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t|               INPUTAN ERROR               |\n");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t>> ");
        return inputan();
    }else{
        return angka;
    }
}


void lihat_stok(){
    FILE* pt4=fopen("stok tiket.txt", "r");
    char string[10];

    printf("\t\t\tStok Tiket\n\t\t\t>> ");
    fscanf(pt4,"%[^\n]\n", string);
    puts(string);
}