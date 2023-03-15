#include <stdio.h>
#include <stdlib.h>



int en_kucuk_eleman(int dizi[], int boyut) {
    int en_kucuk = dizi[0]; // dizi içerisindeki ilk elemaný en küçük olarak atýyoruz.
    for (int i = 1; i < boyut; i++) {
        if (dizi[i] < en_kucuk) {
            en_kucuk = dizi[i];
        }
    }
    return en_kucuk;
}

int main() {
    int dizi[] = {23, 56, 7, 92, 4, 0, -5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int en_kucuk = en_kucuk_eleman(dizi, boyut);
    printf("En kucuk eleman: %d\n", en_kucuk);
    return 0;
}

