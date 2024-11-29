#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nomorKomputer, tebakan, percobaan;
    char pilihan;

    // Inisialisasi generator angka acak
    srand(time(NULL));

    printf("Selamat datang di Permainan Tebak Angka!\n");

    do
    {
        // Komputer memilih nomor acak antara 1 dan 20
        nomorKomputer = rand() % 20 + 1;
        percobaan = 0;

        printf("\nSaya telah memilih sebuah nomor antara 1 dan 20.\n");
        printf("Coba tebak nomor saya!\n");

        // Loop untuk menebak angka
        do
        {
            printf("Masukkan tebakan Anda : ");
            scanf("%d", &tebakan);
            percobaan++;

            if (tebakan < nomorKomputer)
            {
                printf("Nomor saya lebih besar!\n");
            }
            else if (tebakan > nomorKomputer)
            {
                printf("Nomor saya lebih kecil!\n");
            }
            else
            {
                printf("Selamat, Anda benar! Nomor saya adalah %d.\n", nomorKomputer);
                printf("Anda berhasil menebak dalam %d percobaan.\n", percobaan);
            }
        } while (tebakan != nomorKomputer);

        // Menanyakan apakah ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n) : ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    printf("Terima kasih telah bermain! Sampai jumpa lagi.\n");
    return 0;
}
