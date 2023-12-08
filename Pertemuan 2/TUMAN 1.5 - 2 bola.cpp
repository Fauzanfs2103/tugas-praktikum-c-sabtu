#include <stdio.h>

int main()
{
	int diameter;
	float luas, volume; diameter=15;
	
	luas = 4 * 3.14 * diameter * diameter;
	volume = (4/3)* 3.14 * diameter * diameter * diameter ;
	
	printf("Luas dan Keliling Bola");
	printf("\n Diameter = %i", diameter);
	printf("\n Luas = %.3f", luas);
	printf("\n Volume = %.3f", volume);
	
	return 0;
}
