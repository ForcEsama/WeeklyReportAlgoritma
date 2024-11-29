#include <stdio.h>

int main()
{
    char namaPembeli[35], namaBarang[35];
    float hargaSatuan, totalHarga;
    int jumlahBarang;

    printf("Masukkan nama pembeli : ");
    scanf(" %[^\n]s", namaPembeli);

    printf("Masukkan nama barang : ");
    scanf(" %[^\n]s", namaBarang);

    printf("Masukkan harga satuan : ");
    scanf("%f", &hargaSatuan);

    printf("Masukkan jumlah barang yang dibeli : ");
    scanf("%d", &jumlahBarang);

    totalHarga = hargaSatuan * jumlahBarang;

    printf("\n--- Struk Pembelian ---\n");
    printf("Nama Pembeli: %s", namaPembeli);
    printf("Nama Barang: %s", namaBarang);
    printf("Harga Satuan: Rp %.2f\n", hargaSatuan);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Total Harga: Rp %.2f\n", totalHarga);
}