#include <stdio.h>

int main()
{
    // Bagian A
    printf("Bagian A\n");
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("a) Nilai Layla  : %d\n", Layla);
    printf("b) Nilai Balmond: %d\n", Balmond);

    // Bagian B
    printf("\nBagian B\n");
    int *Layla_ptr = &Lesley; // Layla menunjuk ke alamat Lesley
    Balmond = *Layla_ptr + 1;

    printf("a) Nilai Layla (alamat Lesley): %p\n", (void *)Layla_ptr);
    printf("b) Nilai Balmond              : %d\n", Balmond);

    return 0;
}
