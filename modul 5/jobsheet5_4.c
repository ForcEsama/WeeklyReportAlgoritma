#include <stdio.h>
int main()
{
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char grade;

    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilai_kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    nilai_akhir = (nilai_kehadiran * 0.20) + (nilai_tugas * 0.20) +
                  (nilai_uts * 0.25) + (nilai_uas * 0.35);

    if (nilai_akhir >= 91 && nilai_akhir <= 100)
    {
        grade = 'A';
    }
    else if (nilai_akhir >= 86 && nilai_akhir <= 90)
    {
        grade = 'A-';
    }
    else if (nilai_akhir >= 81 && nilai_akhir <= 85)
    {
        grade = 'B+';
    }
    else if (nilai_akhir >= 76 && nilai_akhir <= 80)
    {
        grade = 'B';
    }
    else if (nilai_akhir >= 66 && nilai_akhir <= 75)
    {
        grade = 'B-';
    }
    else if (nilai_akhir >= 56 && nilai_akhir <= 65)
    {
        grade = 'C';
    }
    else if (nilai_akhir >= 45 && nilai_akhir <= 55)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }

    printf("\nNilai Akhir Anda: %.2f\n", nilai_akhir);
    printf("Grade: %c\n", grade);

    if (nilai_akhir <= 55)
    {
        printf("Maaf, anda tidak lulus!\n");
    }
    else if (nilai_akhir >= 56 && nilai_akhir <= 65)
    {
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    }
    else if (nilai_akhir >= 66 && nilai_akhir <= 85)
    {
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    }
    else if (nilai_akhir >= 86 && nilai_akhir <= 100)
    {
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    }

    return 0;
}
