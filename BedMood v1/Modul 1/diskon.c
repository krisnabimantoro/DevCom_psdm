#include <stdio.h>

int main()
{
	const int value = 100;
	float hargaAwal,hargaAkhir,diskon,persentaseDiskon;
	char sebelum[]="Harga sebelum diskon : ";
	
	printf("Input Harga : ");
	scanf("%f",&hargaAwal);
	
	printf("Input Diskon : ");
	scanf("%f",&persentaseDiskon);
	
	//operasi hitung diskon
	diskon = hargaAwal * (persentaseDiskon/value);
	hargaAkhir = hargaAwal-diskon;
	
	printf("%s%.2f\n",sebelum,hargaAwal);
	printf("diskon : %f\n",diskon);
	printf("Harga setelah di diskon : %f",hargaAkhir);
	
	return 0;
}