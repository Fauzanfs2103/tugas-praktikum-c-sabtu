#include <stdio.h>

int main()
{

	int alas;
	int tinggi;
	float luas;
	
	
	printf("Masukan Panjang Alas:");
	scanf("%d",&alas);
	
	printf("Masukan Tinggi segitiga :");
	scanf("%d",&tinggi);
	
	luas = 0.5*alas*tinggi;
	
	printf("Luas segitiga adalah %g cm", luas);
	return 0;
	
}
