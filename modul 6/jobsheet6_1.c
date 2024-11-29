#include <stdio.h>

int main()
{

    printf("Deret Bilangan Genap (0-50) : ");
    for (int i = 0; i <= 50; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    printf("Deret Bilangan Ganjil (0-50) : ");
    for (int i = 1; i <= 50; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}