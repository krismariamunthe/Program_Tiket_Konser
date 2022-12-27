#include <stdio.h>
#include <stdlib.h>
#include "proses.c"

void info();
int inputan();
//void _user();

//  int main(){
//     _user();
//  return 0;
//  }


void _user(){
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
    pilihan = input();
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
}

void info(){
	system("cls");
	printf("\t\t\t--------------------------------------------------\n");
<<<<<<< Updated upstream
    printf("\t\t\t|<<<<<<<<<<<<<<    INFO PROGRAM   >>>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|-------------------------------------------------|\n");
    printf("\t\t\t|          PROGRAM PEMBELIAN TIKET KONSER         |\n");
    printf("\t\t\t|           TUBES ALGORITMA PEMROGRAMAN           |\n");
    printf("\t\t\t|            UNIVERSITAS UDAYANA 2022             |\n");
    printf("\t\t\t|-------------------------------------------------|\n");
    printf("\t\t\t|             PROGRAM INI DIBUAT OLEH             |\n");
    printf("\t\t\t|-------------------------------------------------|\n");
    printf("\t\t\t|         NAMA             |         NIM          |\n");
    printf("\t\t\t|-------------------------------------------------|\n");
    printf("\t\t\t|  [-]  KRISMARIA MUNTHE   |     2205551045       |\n");
    printf("\t\t\t|  [-]  RAY SIMON SOMBOLON |     2205551064       |\n");
    printf("\t\t\t|-------------------------------------------------|\n");
=======
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
    printf("\t\t\t|  [-]  RAY SIMON SIMBOLON|     2205551064       |\n");
    printf("\t\t\t|------------------------------------------------|\n");
>>>>>>> Stashed changes
    system("pause");
    system("cls");
    _user();
}

int input(){
    int angka;
    char karekter;

    if(scanf("\t\t\t%d%c", &angka,&karekter)!=2 || angka < 1 || karekter != '\n'){
	    fflush(stdin);
        system("cls");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t|               INPUTAN ERROR               |\n");
        printf("\t\t\t---------------------------------------------\n");
        printf("\t\t\t>> ");
        return input();
    }else{
        return angka;
    }
}
