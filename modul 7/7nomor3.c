#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    char password[20];

    // Username dan password yang benar
    const char correctUsername[] = "admin";
    const char correctPassword[] = "1234";

    printf("=== Halaman Login ===\n");

    // Meminta input username
    printf("Masukkan username: ");
    scanf("%s", username);

    // Meminta input password
    printf("Masukkan password: ");
    scanf("%s", password);

    // Validasi username
    if (strcmp(username, correctUsername) != 0)
    {
        printf("Username salah\n");
    }
    else
    {
        // Validasi password jika username benar
        if (strcmp(password, correctPassword) != 0)
        {
            printf("Password salah\n");
        }
        else
        {
            printf("Berhasil login\n");
        }
    }

    return 0;
}
