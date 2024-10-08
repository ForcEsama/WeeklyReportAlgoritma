#include <stdio.h>
#define PHI 3.14159 // Definisi konstanta Phi

int main()
{
    // Deklarasi variabel
    float diameter = 12.0;         // Diameter bola dalam cm
    float radius = diameter / 2.0; // Menghitung jari-jari
    float volume, luas_permukaan;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * PHI * radius * radius * radius;

    // Menghitung luas permukaan bola
    luas_permukaan = 4.0 * PHI * radius * radius;

    // Menampilkan hasil
    printf("Jari-jari bola: %.2f cm\n", radius);
    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luas_permukaan);

    return 0;
}
