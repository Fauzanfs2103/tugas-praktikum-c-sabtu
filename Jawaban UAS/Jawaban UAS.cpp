#include <stdio.h>

int hitungNilaiTengah(int array[], int ukuran) {
    return array[ukuran / 2];
}

void putarMotorUtama() {
    printf("Motor Utama Berputar 180 Derajat\n");
}

void putarMotorTungkai() {
    printf("Motor Tungkai Berputar 45 Derajat\n");
}

void gerakMotorJari() {
    printf("Motor Jari Bergerak Mendekati Objek\n");
}

void prosesPengelasan(int waktu) {
    printf("Proses Pengelasan Berlangsung selama %d detik\n", waktu);
}

void prosesSetiapKetebalan(int ketebalan[], int waktu[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        int nilaiTengah = hitungNilaiTengah(ketebalan, ukuran);

        printf("Motor Utama Pindah ke Nilai Tengah %d\n", nilaiTengah);

        putarMotorTungkai();

        gerakMotorJari();

        prosesPengelasan(waktu[i]);

        
    }
}

int main() {
    int ketebalan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ukuran = sizeof(ketebalan) / sizeof(ketebalan[0]);

    putarMotorUtama();

    prosesSetiapKetebalan(ketebalan, waktu, ukuran);

    return 0;
}

