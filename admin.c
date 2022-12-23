#include <stdio.h>
#include <stdlib.h>
#include "proses admin.c"

void info();

int main(){
    home_page();
return 0;
}

int home_page() {
    int pilihan;

    kembali1:
    printf("\t\t\t--------------------------------------------------\n");
    printf("\t\t\t|<<<<<<<<<<<<<<<    MENU UTAMA    >>>>>>>>>>>>>>>|\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t|  [1]  DATA PEMBELIAN TIKET                     |\n");
    printf("\t\t\t|  [2]  TIKET TERJUAL                            |\n");
    printf("\t\t\t|------------------------------------------------|\n");
    printf("\t\t\t>> ");
    pilihan = inputan();
    fflush(stdin);

    switch(pilihan){
        case 1: 
            system("cls");
            data_tiket();
        break;
        case 2:
            system("cls");
            tiket_jual();
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
return 0;
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
