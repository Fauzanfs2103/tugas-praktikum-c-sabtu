#include <stdio.h>

void putarMotorUtama() {
    printf("Motor Utama Berputar 180 Derajat\n");
}
void putarMotorTungkai() {
    printf("Motor Tungkai Berputar 45 Derajat\n");
}

void gerakMotorJari() {
    printf("Motor Jari Bergerak Mendekati Objek\n");
}

void prosesPengelasan(int ketebalan, int waktu) {
    printf("Pengelasan pada ketebalan %d mm. Waktu: %d detik\n", ketebalan, waktu);
}

int main() {
    int ketebalan[] = {6, 8, 12, 24, 30, 36, 42, 49, 50};
    int ukuran = sizeof(ketebalan) / sizeof(ketebalan[0]);
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    putarMotorUtama();

    for (int i = 0; i < ukuran; i++) {
        int nilaiTengah = ketebalan[i];

        printf("Motor Utama Pindah ke Nilai Tengah %d\n", nilaiTengah);

        putarMotorTungkai();

        gerakMotorJari();

        prosesPengelasan(ketebalan[i], waktu[i]);
    }

    return 0;
}
