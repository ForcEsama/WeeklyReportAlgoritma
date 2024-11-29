#include <stdio.h>
#include <string.h>

int main()
{
    // Inisialisasi string
    char kata[] = "BORLAND";
    char *ptr = kata + strlen(kata) - 1; // Pointer menunjuk ke karakter terakhir

    printf("Output:\n");

    // Loop untuk mencetak huruf secara terbalik
    for (int i = 0; i < strlen(kata); i++)
    {
        printf("%.*s\n", i + 1, ptr - i); // Cetak dari posisi pointer ke awal string
    }

    return 0;
}
