#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa
{
    char npm[15];
    char nama[50];
    char tglLahir[15];
    char alamat[100];
    char hp[15];
};

int main()
{
    struct Mahasiswa mahasiswa[100]; // Array untuk menyimpan data mahasiswa
    int count = 0;                   // Variabel untuk menghitung jumlah mahasiswa yang dimasukkan
    char pilih;

    do
    {
        // Memasukkan data mahasiswa
        printf("Masukkan Data Mahasiswa:\n");

        // Input NPM
        printf("NPM       : ");
        scanf("%s", mahasiswa[count].npm);

        // Input Nama
        printf("NAMA      : ");
        getchar(); // Untuk menghapus newline setelah input NPM
        fgets(mahasiswa[count].nama, sizeof(mahasiswa[count].nama), stdin);
        mahasiswa[count].nama[strcspn(mahasiswa[count].nama, "\n")] = 0; // Menghapus newline pada akhir nama

        // Input Tanggal Lahir
        printf("TGL LAHIR : ");
        scanf("%s", mahasiswa[count].tglLahir);

        // Input Alamat
        printf("ALAMAT    : ");
        getchar(); // Untuk menghapus newline setelah input TGL LAHIR
        fgets(mahasiswa[count].alamat, sizeof(mahasiswa[count].alamat), stdin);
        mahasiswa[count].alamat[strcspn(mahasiswa[count].alamat, "\n")] = 0; // Menghapus newline pada akhir alamat

        // Input HP
        printf("HP        : ");
        scanf("%s", mahasiswa[count].hp);

        // Menanyakan apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &pilih);
        count++;

    } while (pilih == 'y' || pilih == 'Y'); // Loop jika memilih 'y'

    // Menampilkan data mahasiswa yang telah dimasukkan
    printf("\nData Mahasiswa yang dimasukkan:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s %s %s %s %s\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tglLahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}
