#include <stdio.h>
#include <stdlib.h>
#include "proses.c"



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
