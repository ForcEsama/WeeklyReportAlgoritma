#include <stdio.h>

void main()
{
    int nilai[20] = {90, 92, 89, 88, 91, 92, 93, 97, 98, 88, 89, 90, 91, 92, 93, 88, 89, 90, 92, 91};
    int length = sizeof(nilai) / sizeof(*nilai);
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += nilai[i];
    }

    float rataRata = (float)sum / (float)length;

    printf("Rata-rata nilai 20 mahasiswa : %.2f\n", rataRata);
}