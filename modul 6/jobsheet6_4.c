#include <stdio.h>

#define MIN_SALDO 50000

void cekSaldo(int saldo)
{
    printf("Saldo saat ini : Rp. %d\n", saldo);
}

int setoran(int saldo)
{
    int jumlah;
    printf("Masukkan jumlah setoran : Rp. ");
    scanf("%d", &jumlah);

    saldo += jumlah;
    printf("Setoran berhasil! Saldo baru : Rp. %d\n", saldo);
    return saldo;
}

int penarikan(int saldo)
{
    int jumlah;
    printf("Masukkan jumlah penarikan : Rp. ");
    scanf("%d", &jumlah);

    if (saldo - jumlah < MIN_SALDO)
    {
        printf("Penarikan gagal! Saldo minimal Rp. %d harus dipertahankan.", MIN_SALDO);
    }
    else
    {
        saldo -= jumlah;
        printf("Penarikan berhasil! Saldo baru : Rp. %d\n");
    }
    return saldo;
}

int main()
{
    int saldo = 175000;
    int pilihan;

    printf("\n--- Selamat Datang di ATM ---\n");
    printf("No Rek : 0123\n");
    printf("Nama Akun : Hattori\n");

    do
    {
        printf("\n--- Menu Atm ---\n");
        printf("1. Cek Saldo\n");
        printf("2. Setoran\n");
        printf("3. Penarikan Tunai\n");
        printf("4. Exit\n");
        printf("Pilih menu : ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            cekSaldo(saldo);
            break;
        case 2:
            saldo = setoran(saldo);
            break;
        case 3:
            saldo = penarikan(saldo);
            break;
        case 4:
            printf("Terima kasih telah menggunakan ATM.\n");
            break;
        default:
            printf("Pilihan tidak valid, silahkan coba lagi.\n");
            break;
        }
    } while (pilihan != 4);

    return 0;
}