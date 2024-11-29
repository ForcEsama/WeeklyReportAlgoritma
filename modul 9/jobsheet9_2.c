#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat[100]; // Variabel untuk menyimpan input kalimat
    int panjang, i;

    // Meminta input dari pengguna
    printf("Kalimat Masukan : ");
    scanf("%s", kalimat);

    // Menghitung panjang kalimat
    panjang = strlen(kalimat);

    // Menampilkan kebalikannya
    printf("Kebalikannya    : ");
    for (i = panjang - 1; i >= 0; i--)
    {
        printf("%c", kalimat[i]);
    }
    printf("\n");

    return 0;
}
