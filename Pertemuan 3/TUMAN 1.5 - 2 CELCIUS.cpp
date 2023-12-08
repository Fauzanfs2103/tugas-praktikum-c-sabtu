#include<stdio.h>

int main() {  

	int celcius;
	
	float fahrenheit, reamur;
	
	printf(" PROGRAM KONVERSI SUHU SEDERHANA \n \n");
	printf("Input Suhu dalam Celcius : ");	
	scanf("%i", &celcius);
	
	fahrenheit = (celcius * 1.8) + 32;
	reamur = (celcius * 0.8);
	
	printf("Fahrenheit = %.1f F\n", fahrenheit);
	printf("Reamur = %.1f R\n", reamur);
	
	 
	
	return 0;

}
