#include <stdio.h>
#include <stdlib.h>


void data_tiket(){
    FILE* pt=fopen("struk tiket.txt", "r");
    char string[300];

    while (!feof(pt)){
        fscanf(pt,"%[^\n]\n", string);
        puts(string);
    }

}

void tiket_jual(){
    FILE* pt2=fopen("tiket terjual.txt", "r");
    char string[10];

    printf("Jumlah tiket yang terjual\n>> ");
    fscanf(pt2,"%[^\n]\n", string);
    puts(string);
}