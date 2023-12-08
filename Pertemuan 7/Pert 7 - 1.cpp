#include <stdio.h>

int main() {
    int nilai[10];
    int i; 
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (i = 0; i < 10; i++) {
        printf("Nilai mahasiswa %d: ", i + 1);
        if (scanf("%d", &nilai[i]) != 1 || nilai[i] < 0 || nilai[i] > 100) {
            printf("Input yang Anda masukkan salah. Harap masukkan angka antara 0 dan 100.\n");
            break; 
        }
    }

   
    if (i < 10) {
        printf("Program berhenti karena input salah.\n");
        return 1;  // ini untuk saat terjadi kesalahan program otomatis keluar sendiri
    }

    printf("\nDaftar nilai mahasiswa yang lulus:\n");

    for (int j = 0; j < 10; j++) {
        if (nilai[j] >= 60) {
            printf("Mahasiswa %d: %d\n", j + 1, nilai[j]);
        }
    }

    return 0;
}

