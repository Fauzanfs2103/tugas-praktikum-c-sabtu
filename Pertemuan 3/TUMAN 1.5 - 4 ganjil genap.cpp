#include <stdio.h>

int main() 
{
    int bilangan;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) 
	{
        if (bilangan % 2 == 0) 
		{
            printf("Bilangan %d adalah GENAP\n", bilangan);
        } 
		else 
		{
            printf("Bilangan %d adalah GANJIL\n", bilangan);
        }
    } 
	else
	{
        printf("Input tidak valid. Masukkan bilangan bulat positif.\n");
    }
    

    return 0;
}
