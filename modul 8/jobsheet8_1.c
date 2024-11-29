#include <stdio.h>

// Fungsi rekursif untuk menghitung perkalian menggunakan penjumlahan
int perkalianRekursif(int a, int b)
{
    // Basis: jika b == 0, hasilnya adalah 0
    if (b == 0)
    {
        return 0;
    }
    // Rekurens: tambahkan a dengan hasil perkalian rekursif dengan b-1
    return a + perkalianRekursif(a, b - 1);
}

int main()
{
    int a, b;

    // Input dua bilangan bulat positif
    printf("Masukkan bilangan pertama (a): ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua (b): ");
    scanf("%d", &b);

    // Pastikan bilangan bulat positif
    if (a < 0 || b < 0)
    {
        printf("Hanya bilangan bulat positif yang diperbolehkan.\n");
        return 1;
    }

    // Hitung hasil perkalian menggunakan fungsi rekursif
    int hasil = perkalianRekursif(a, b);

    // Tampilkan hasilnya
    printf("Hasil perkalian %d x %d = %d\n", a, b, hasil);

    return 0;
}
