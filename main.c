#include <stdio.h>
#include <stdlib.h>
#include "proses.c"

void info();

int main(){
    home_page();
return 0;
}

//205 == lurus 200 = bawah kiri ,201,225,225,193

int home_page() {
    int pilihan;

    kembali1:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<    MENU UTAMA    >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  PEMBELIAN TIKET                          |\n");
    printf("\t\t\t|  [2]  LIST TIKET                               |\n");
    printf("\t\t\t|  [3]  INFO PROGRAM                             |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t>> ");
    pilihan = inputan();
    //scanf("%d",&pilihan);
    fflush(stdin);

    switch(pilihan){
        case 1: 
            system("cls");
            pembelian();
        break;
        case 2:
            system("cls");
            list_tiket();
        break;
        case 3:
        	info();
        break;
        default :
            system("cls");
            printf("\t\t\t---------------------------------------------\n");
            printf("\t\t\t|               INPUTAN ERROR               |\n");
            printf("\tt\t---------------------------------------------\n");
            system("pause");
            system("cls");
            goto kembali1;
        break;
    }
return 0;
}

void info(){
	system("cls");
	printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<   INFO PROGRAM   >>>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|         PROGRAM PEMBELIAN TIKET KONSER         |\n");
    printf("\t\t\t|          TUBES ALGORITMA PEMROGRAMAN           |\n");
    printf("\t\t\t|           UNIVERSITAS UDAYANA 2022             |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|            PROGRAM INI DIBUAT OLEH             |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|        NAMA             |         NIM          |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [-]  KRISMARIA MUNTHE  |     2205551045       |\n");
    printf("\t\t\t|  [-]                    |     2205551000       |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    system("pause");
    system("cls");
    home_page();
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
