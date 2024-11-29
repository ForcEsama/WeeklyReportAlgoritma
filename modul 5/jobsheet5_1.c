#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, hasil;

    printf("\n====Program Kalkulator Sederhana====\n");
    printf("Pilih suatu operasi yang ingin dilakukan\n");
    printf("1) Penjumlahan\n");
    printf("2) Pengurangan\n");
    printf("3) Perkalian\n");
    printf("4) Pembagian\n");
    printf("5) Hasil bagi\n");
    printf("=====================================\n");

    printf("Masukkan pilihanmu : ");
    scanf("%d", &choice);

    printf("Masukkan angka pertama : ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua : ");
    scanf("%f", &num2);

    switch (choice)
    {
    case 1:
        hasil = num1 + num2;
        printf("Hasil penjumlahan : %.2f", hasil);
        break;

    case 2:
        hasil = num1 - num2;
        printf("Hasil pengurangan : %.2f", hasil);
        break;

    case 3:
        hasil = num1 * num2;
        printf("Hasil perkalian : %.2f", hasil);
        break;

    case 4:
        if (num2 != 0)
        {
            hasil = num1 / num2;
            printf("Hasil pembagian : %.2f", hasil);
        }
        else
        {
            printf("Error!");
        }
        break;

    case 5:
        if ((int)num2 != 0)
        {
            hasil = (int)num1 % (int)num2;
            printf("Hasil bagi (modulus): %.0f\n", hasil);
        }
        else
        {
            printf("Error! Pembagian dengan nol tidak diperbolehkan.\n");
        }
        break;

    default:
        printf("Pilihan tidak tersedia!");
        break;
    }
    return 0;
}