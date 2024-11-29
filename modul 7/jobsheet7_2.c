#include <stdio.h>

int main()
{
    int jumlahMahasiswa, i;

    // Meminta jumlah mahasiswa yang akan diinputkan
    printf("Input banyak mahasiswa : ");
    scanf("%d", &jumlahMahasiswa);

    // Deklarasi array untuk menyimpan nama mahasiswa
    char namaMahasiswa[jumlahMahasiswa][100]; // Mengasumsikan nama maksimal 99 karakter

    // Input nama mahasiswa
    for (i = 0; i < jumlahMahasiswa; i++)
    {
        printf("Input nama mahasiswa %d : ", i + 1);
        scanf(" %[^\n]", namaMahasiswa[i]); // Menggunakan %[^\n] untuk membaca input dengan spasi
    }

    // Menampilkan nama mahasiswa
    printf("\n--- Daftar Nama Mahasiswa ---\n");
    for (i = 0; i < jumlahMahasiswa; i++)
    {
        printf("Nama mahasiswa ke-%d : %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}
