#include <stdio.h>
#include <math.h>

int main() 
{
    float alas, tinggi, sisiMiring;


    printf("Masukkan panjang sisi alas (cm): ");
    scanf("%f", &alas);

    printf("Masukkan panjang sisi tinggi (cm): ");
    scanf("%f", &tinggi);

    sisiMiring = (alas * 2 + tinggi * 2);

    printf("Panjang sisi miring segitiga siku-siku adalah: %.2f cm\n", sisiMiring);

    return 0;
}
