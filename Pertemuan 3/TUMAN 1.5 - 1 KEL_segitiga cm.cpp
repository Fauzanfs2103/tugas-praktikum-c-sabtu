#include <stdio.h>

int main(){
	
	int sisi1;
	int sisi2;
	int sisi3;

	int keliling;
	
	printf("Masukan Panjang Sisi 1 :");
	scanf("%d",&sisi1);
	
	printf("Masukan Panjang Sisi 2 :");
	scanf("%d",&sisi2);
	
	printf("Masukan Panjang Sisi 3 :");
	scanf("%d",&sisi3);
	
	keliling = sisi1+sisi2+sisi3;
	
	printf("Keliling segitiga adalah %d cm",keliling);
	return 0;
}

