#include <stdio.h>

int main() {
    int array[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int indeks = 11;
    // Mengosongkan beberapa indeks di antara data yang ada
    array[0] = 0;  // mengosongkan indeks 0
    array[3] = 0;  // mengosongkan indeks 3
    array[5] = 0;  // mengosongkan indeks 5
    array[9] = 0;  // mengosongkan indeks 9
    array[11] = 0;  //mengosongkan indeks 11
    array [12] = 0;  // mengosongkan indeks 12
	
    // Menampilkan menampilkan bilangan ganjil saja
    printf("A = [");
    for (int i = 0; i < indeks; ++i) {
         if (array[i] % 2 != 0 && array[i] != 999) {
            printf(" %d ", array[i]);
        } else {
            printf(" ... ");  // Menandai indeks yang dikosongkan
        }
    }
    printf("]\n");
    return 0;
}

