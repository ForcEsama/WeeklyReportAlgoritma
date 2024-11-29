#include <stdio.h>

int main()
{
    char name[35];
    int nim;
    char prodi[64];
    char fakultas[64];
    float nilaiPratikum;
    float nilaiUts;
    float nilaiUas;
    float nilaiAkhir;

    printf("Masukkan nama : ");
    scanf(" %[^\n]s", name);

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    printf("Masukkan Prodi : ");
    scanf(" %[^\n]s", &prodi);

    printf("Masukkan Fakultas : ");
    scanf(" %[^\n]s", &fakultas);

    printf("Masukkan Nilai Pratikum : ");
    scanf(" %f", &nilaiPratikum);

    printf("Masukkan Nilai UTS : ");
    scanf(" %f", &nilaiUts);

    printf("Masukkan Nilai UAS : ");
    scanf(" %f", &nilaiUas);

    printf("\n========DATA MAHASISWA=========\n");
    printf("Nama           : %s\n", name);
    printf("Nim            : %d\n", nim);
    printf("Prodi          : %s\n", prodi);
    printf("Fakultas       : %s\n", fakultas);
    printf("Nilai Pratikum : %.0f\n", nilaiPratikum);
    printf("Nilai UTS      : %.0f\n", nilaiUts);
    printf("Nilai UAS      : %.0f\n", nilaiUas);
    printf("Nilai Akhir    : %.2f\n", nilaiAkhir = (0.30 * nilaiPratikum) + (0.30 * nilaiUts) + (0.40 * nilaiUas));
    return 0;
}