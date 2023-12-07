#include <stdio.h>

int main()
{
	float hargaAwal, hargaAkhir, persentaseDiskon, diskon;
	char sebelum[] = "Harga sebelum dskon adalah : ", sesudah[]="Harga setelah diskon adalah : ";
	
	printf("Input Harga : ");
	scanf("%f",&hargaAwal);
	
	printf("Input persentase diskon : ");
	scanf("%f",&persentaseDiskon);
	
	diskon = hargaAwal * (persentaseDiskon/100);
	hargaAkhir = hargaAwal-diskon;
			
	printf("\n%s%.2f\n",sebelum,hargaAwal);
	printf("Mendapatkan diskon sebesar : %.2f\n",diskon);
	printf("%s%.2f\n",sesudah,hargaAkhir);
	
		
	return 0;
}