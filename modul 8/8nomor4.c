#include <stdio.h>

// Fungsi untuk menghitung besar potongan (diskon)
double potong(double totalPembelian)
{
    if (totalPembelian > 3000000)
    {
        return 0.35 * totalPembelian;
    }
    else if (totalPembelian > 1000000)
    {
        return 0.20 * totalPembelian;
    }
    else
    {
        return 0.0;
    }
}

int main()
{
    double totalPembelian, diskon, totalBayar;

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%lf", &totalPembelian);

    // Hitung diskon menggunakan fungsi potong
    diskon = potong(totalPembelian);
    totalBayar = totalPembelian - diskon;

    // Tampilkan hasil
    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", totalBayar);

    return 0;
}
