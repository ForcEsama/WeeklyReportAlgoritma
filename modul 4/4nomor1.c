#include <stdio.h>

int main()
{
    int totalDetik = 3700, jam, menit, detik;

    // pakai command dibawah ini jika ingin menggunakan input mode dan ubah "totalDetik = 3700" menjadi "totalDetik"
    /*printf("Masukkan total waktu dalam detik : ");
    scanf("%d", totalDetik);*/

    jam = totalDetik / 3600;
    menit = (totalDetik % 3600) / 60;
    detik = totalDetik % 60;

    printf("Hasil Output : %d jam %d menit %d detik\n", jam, menit, detik);
    return 0;
}