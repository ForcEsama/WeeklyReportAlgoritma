#include <stdio.h>

int main()
{
    float kurs = 14250.0;
    float rupiah = 2500000.0;
    float dollar;

    dollar = rupiah / kurs;

    printf("Jumlah rupiah : Rp.%.0f\n", rupiah);
    printf("Jumlah dollar : $%.2f", dollar);

    return 0;
}