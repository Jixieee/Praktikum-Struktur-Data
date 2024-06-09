/*
	Nama  : Muhammad Jimmy Al Afif
	Nim   : 23343046
	Prodi : Informatika
*/
#include <stdio.h>
#include <string.h> 

typedef struct {
    char nama[50];
    char jurusan[50];
    int nilai;
} Mahasiswa;

int main(void)
{
    Mahasiswa mhs01;

    strcpy(mhs01.nama, "Muhammad Jimmy Al Afif");
    strcpy(mhs01.jurusan, "Informatika");
    mhs01.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s ", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai UAS %i \n", mhs01.nilai);

    return 0;
}
