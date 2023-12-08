#include <stdio.h>

int main() {
    int A[11];
    int indexA = 0;

    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    
	// ini untuk menyimpan data ke dalam array A tapi hanya nilai genap saja
    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[indexA++] = data[i];
        }
    }

    // Cetak array A
    printf("[ ");
    for (int i = 0; i < 11; i++) {
        if (i < indexA) {
            printf("%2d", A[i]);  // Cetak nilai genap
        } else {
            printf("  ");  // Cetak spasi untuk nilai yang tidak ada
        }

        // Membuat tanda koma
        if (i < 10) {
            printf(" , ");
        }
    }
    printf(" ]\n");

    return 0;
}

