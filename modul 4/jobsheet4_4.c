#include <stdio.h>

int main()
{
    int durasi;
    int tarifJamPertama = 15000;
    int tarifJamBerikutnya = tarifJamPertama * 0.50;
    int totalBiaya;

    printf("Masukkan durasi menonton film (dalam jam): ");
    scanf("%d", &durasi);

    totalBiaya = tarifJamPertama + (durasi - 1) * tarifJamBerikutnya;

    printf("Total biaya sewa untuk %d jam adalah Rp %d\n", durasi, totalBiaya);

    return 0;
}
