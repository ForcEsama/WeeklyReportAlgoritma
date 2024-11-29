#include <stdio.h>

int main()
{
    float total_pembelian, diskon = 0, cashback = 0, total_bayar;

    printf("Selamat datang di TOSERBA!\n");
    printf("Masukkan total pembelian: Rp. ");
    scanf("%f", &total_pembelian);

    if (total_pembelian > 125000)
    {
        diskon = 0.25 * total_pembelian;
        cashback = 5000;
        printf("Anda mendapatkan diskon 25%% dan cashback Rp. 5.000!\n");
    }
    else if (total_pembelian > 75000)
    {
        diskon = 0.15 * total_pembelian;
        printf("Anda mendapatkan diskon 15%%!\n");
    }
    else if (total_pembelian <= 75000 && total_pembelian > 0)
    {
        diskon = 0.05 * total_pembelian;
        printf("Anda mendapatkan diskon 5%%!\n");
    }
    else
    {
        printf("Total pembelian tidak valid!\n");
        return 1;
    }

    total_bayar = total_pembelian - diskon - cashback;

    printf("Total pembelian: Rp. %.2f\n", total_pembelian);
    printf("Diskon: Rp. %.2f\n", diskon);
    if (cashback > 0)
    {
        printf("Cashback: Rp. %.2f\n", cashback);
    }
    printf("Total yang harus dibayar: Rp. %.2f\n", total_bayar);

    return 0;
}
