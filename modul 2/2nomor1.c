#include <stdio.h>

int main(){
    char name[20];

    printf("Hello, siapa nama lengkapmu?\n");
    scanf("%[^\n]s", name);
    printf("Selamat Datang %s dalam Pemrograman C!",name);
        
    
    return 0;
}