#include <stdio.h>

int main (){
    int angka;
    int *ptr = &angka;

    scanf("%d", &angka);

    printf("Nilai variabel = %d\n", angka);
    printf("Alamat variabel = %p\n", (void*)ptr);
    printf("Nilai melalui pointer = %d\n", *ptr);

    *ptr = *ptr * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", *ptr);

    return 0;
}