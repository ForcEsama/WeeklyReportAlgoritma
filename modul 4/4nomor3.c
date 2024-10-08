#include <stdio.h>

int main()
{
    float presensi = 85, praktek = 65, uts = 80, uas = 75;
    float nilaiAkhir;

    nilaiAkhir = (presensi * 0.10) + (praktek * 0.20) + (uts * 0.30) + (uas * 0.40);

    printf("Nilai akhir : %.2f", nilaiAkhir);

    return 0;
}