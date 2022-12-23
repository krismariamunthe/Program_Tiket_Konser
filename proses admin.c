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