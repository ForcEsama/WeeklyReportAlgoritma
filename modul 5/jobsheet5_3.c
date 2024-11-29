#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    int pilihan;
    float jari_jari, sisi, panjang, lebar, tinggi;

    printf("Pilih bangun ruang:\n");
    printf("1. Bola\n");
    printf("2. Kubus\n");
    printf("3. Balok\n");
    printf("4. Tabung\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Masukkan jari-jari bola: ");
        scanf("%f", &jari_jari);
        printf("Luas permukaan bola: %.2f\n", 4 * M_PI * pow(jari_jari, 2));
        break;
    case 2:
        printf("Masukkan panjang sisi kubus: ");
        scanf("%f", &sisi);
        printf("Luas permukaan kubus: %.2f\n", 6 * pow(sisi, 2));
        break;
    case 3:
        printf("Masukkan panjang, lebar, dan tinggi balok: ");
        scanf("%f %f %f", &panjang, &lebar, &tinggi);
        printf("Luas permukaan balok: %.2f\n", 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi));
        break;
    case 4:
        printf("Masukkan jari-jari alas dan tinggi tabung: ");
        scanf("%f %f", &jari_jari, &tinggi);
        printf("Luas permukaan tabung: %.2f\n", 2 * M_PI * jari_jari * (jari_jari + tinggi));
        break;
    default:
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}