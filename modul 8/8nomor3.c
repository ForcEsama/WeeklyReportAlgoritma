#include <stdio.h>
#define PI 3.14159

// Fungsi untuk menghitung luas lingkaran
double luas(double radius)
{
    return PI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
double keliling(double radius)
{
    return 2 * PI * radius;
}

int main()
{
    double radius;

    // Meminta input dari pengguna
    printf("Masukkan jari-jari lingkaran : ");
    scanf("%lf", &radius);

    // Memanggil fungsi dan mencetak hasil
    printf("Luas lingkaran     : %.2f\n", luas(radius));
    printf("Keliling lingkaran : %.2f\n", keliling(radius));

    return 0;
}
