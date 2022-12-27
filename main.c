#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "file admin.c"
#include "file user.c"


typedef struct akun{		   //variabel dalam fungsi registrasi dan login
    char nama [50];
    char username [20];
    char password [20];
} akun;

akun Pengguna;

char inputusername [20];	 //variabel dalam fungsi login
char inputpassword [20];

//AKUN YANG BISA DIGUNAKAN UNTUK LOGIN
char username[20] = "admin";
char password[20] = "00000";

void mode();
void registrasi();
void login();

int main(){
void mode();
}

void mode() {
    int menu;
    printf ("\n\n\t\t\t\t--------------------------------------------------\n");
    printf ("\t\t\t\t|=================    WELCOME    ================|\n");
    printf ("\t\t\t\t|------------------------------------------------|\n");
    printf ("\t\t\t\t|   1   |  Registrasi                            |\n");
    printf ("\t\t\t\t|   2   |  Login                                 |\n");
    printf ("\t\t\t\t|   0   |  Keluar                                |\n",186,186);
    printf ("\t\t\t\t--------------------------------------------------\n",219,220,220,219);
	printf ("\t\t\t\t>> ");
	scanf("%d", &menu);
	fflush(stdin);

	switch (menu) {
		case 1 : {
			registrasi();
			login();
			break;
		}
		case 2 : {
			login();
			break;
		}
		case 0 : {
            exit(0);
		}
		default : {
		    system("cls");
            mode();
		}
    }
}

void registrasi() {	//deklarasi fungsi void
    system("cls");

    printf ("\n\n\t\t\t\t--------------------------------------------------\n");
    printf ("\t\t\t\t==================  REGISTRASI  ==================\n");
    printf ("\t\t\t\t------------------------------------------------------\n");
    printf ("\n");
    printf ("\t\t\t\tMasukkan nama lengkap : ");
    gets (Pengguna.nama);	//memanggil array of char nama lengkap dengan spasi
    fflush (stdin);

    printf ("\t\t\t\tBuat username : ");
    scanf ("%s",&Pengguna.username);
    fflush (stdin);

    printf ("\t\t\t\tBuat password : ");
    scanf ("%s", &Pengguna.password);
    fflush (stdin);
    system ("cls");

    //Mencetak akun registrasi ke dalam file akun
    FILE *akun=fopen("Daftar Akun.txt", "a");
    fprintf(akun,"Nama user: %s\n", Pengguna.nama);
    fprintf(akun,"Username : %s\n", Pengguna.username);
    fprintf(akun,"Password : %s\n", Pengguna.password);
    fprintf(akun,"================================\n");

    strcpy(username, Pengguna.username);
    strcpy(password, Pengguna.password);
}


void login() {

	system("cls");
	printf ("\n\n\t\t\t\t--------------------------------------------------\n");
    printf ("\t\t\t\t===================     LOGIN    ===================\n");
    printf ("\t\t\t\t--------------------------------------------------\n");
	printf ("\n");
	printf ("\t\t\t\tMasukkan username : ");
	scanf ("%s", &inputusername);
	fflush (stdin);
	printf ("\t\t\t\tMasukkan password : ");
	scanf ("%s", &inputpassword);
	fflush (stdin);

	//basis
	if ((strcmp(username, inputusername) == 0 || strcmp(Pengguna.username, inputusername) == 0) && ( strcmp(password, inputpassword) == 0 || strcmp(Pengguna.password, inputpassword) == 0 )	){
		system ("cls");
		printf ("\n\n\t\t\t\t--------------------------------------------------\n");
        printf ("\t\t\t\t===================  S U K S E S  ==================\n");
        printf ("\t\t\t\t----------------------------------------------------\n");
		sleep(1);
		system ("\t\t\t\t\tpause");
		system ("cls");

        if (strcmp(username,"admin") == 0 && strcmp(password,"00000") == 0){
            halaman_admin();
        }else{
            user12();
        }
		//menu();
	}

	//rekurens
    else {
        system ("cls");
        printf ("\n\n\t\t\t\t--------------------------------------------------\n");
        printf ("\t\t\t\t===================   G A G A L   ==================\n");
        printf ("\t\t\t\t----------------------------------------------------\n");

        sleep(1);
        system ("pause");

        login();
	}
}
