#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[15];
    int mulaiHari, mulaiBulan;
    int akhirHari, akhirBulan;
} Zodiak;

int main()
{
    // Array struktur untuk menyimpan data zodiak
    Zodiak zodiak[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}};

    int tgl, bln, thn, i;
    printf("Masukkan Tanggal Lahir Anda [dd-mm-yyyy]: ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    // Menentukan zodiak
    char *zodiakAnda = "TIDAK DIKETAHUI";
    for (i = 0; i < 12; i++)
    {
        if ((bln == zodiak[i].mulaiBulan && tgl >= zodiak[i].mulaiHari) ||
            (bln == zodiak[i].akhirBulan && tgl <= zodiak[i].akhirHari))
        {
            zodiakAnda = zodiak[i].nama;
            break;
        }
    }

    // Menampilkan hasil
    printf("Tanggal Lahir Anda: %02d-%02d-%04d\n", tgl, bln, thn);
    printf("Zodiak Anda adalah: %s\n", zodiakAnda);

    return 0;
}
