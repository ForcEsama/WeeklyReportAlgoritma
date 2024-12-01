#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char nama[50], nim[20], jurusan[50], programStudi[50];
    int jumlah, i;

    file = fopen("datamahasiswa.txt", "w");
    if (file == NULL)
    {
        printf("Gagal membuka file!\n");
        return 1;
    }

    printf("banyak data Mahasiswa : ");
    scanf("%d", &jumlah);
    getchar();

    for (i = 1; i <= jumlah; i++)
    {
        printf("\nMasukan data mahasiswa ke-%d\n", i);

        printf("Nama          : ");
        fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = 0;

        printf("NIM           : ");
        fgets(nim, sizeof(nim), stdin);
        nim[strcspn(nim, "\n")] = 0;

        printf("Jurusan       : ");
        fgets(jurusan, sizeof(jurusan), stdin);
        jurusan[strcspn(jurusan, "\n")] = 0;

        printf("Program Studi : ");
        fgets(programStudi, sizeof(programStudi), stdin);
        programStudi[strcspn(programStudi, "\n")] = 0;

        fprintf(file, "Data Mahasiswa ke-%d :\n", i);
        fprintf(file, "Nama                 : %s\n", nama);
        fprintf(file, "NIM                  : %s\n", nim);
        fprintf(file, "Jurusan              : %s\n", jurusan);
        fprintf(file, "Program Studi        : %s\n", programStudi);
        fprintf(file, "-----------------------\n");
    }

    fclose(file);

    printf("\nData berhasil disimpan di file 'datamahasiswa.txt'\n");

    return 0;
}
