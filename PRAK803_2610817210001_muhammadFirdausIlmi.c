#include <stdio.h>
#include <string.h>

struct peserta {
    char name[100];
    int age;
    int score;
};

int main(){
    struct peserta peserta1;
    printf("Nama : ");
    fgets(peserta1.name, sizeof(peserta1.name), stdin);
    peserta1.name[strcspn(peserta1.name, "\n")] = '\0';

    printf("Umur : ");
    scanf("%d", &peserta1.age);

    printf("Skor : ");
    scanf("%d", &peserta1.score);

    printf("Data Peserta:\n");
    printf("Nama : %s\n", peserta1.name);
    printf("Umur : %d tahun\n", peserta1.age);
    printf("Skor : %d\n", peserta1.score);

    return 0;
}