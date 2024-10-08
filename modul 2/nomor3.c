#include <stdio.h>

int main()
{
    int alas = 8;
    int tinggi = 5;
    int luas;

    luas = (alas * tinggi) / 2;
    printf("Luas segitiga dengan alas %d dan tinggi %d adalah %d\n", alas, tinggi, luas);
    return 0;
}