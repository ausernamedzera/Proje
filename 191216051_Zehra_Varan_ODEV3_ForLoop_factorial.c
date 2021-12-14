// Ad Soyad: Zehra Varan                                                                                                           3.04.2021
// Öğrenci Numarası: 191216051
// Dersin kodu_Dersin adı: BIL102_Temel Programlama 2
// Ödev: Ödev 3 For Döngüsü İle Faktöriyel Hesabı

#include <stdio.h>

int main () {
	int s, i, factorial=1;												// Değişkenleri tanımlıyorum. Faktöriyelin taban değerini 1'e eşitliyorum.
	printf("Faktoriyelini hesaplamak istediginiz sayiyi girin: ");		// Kullanıcıdan faktöriyelini hesaplamasını istediği sayının girdisini alıyor.
	scanf("%d", &s);													// Kullanıcıdan alınan girdi s değişkenine atanıyor.
	
	if (s < 0)														
		printf("Girdiğiniz değer pozitif tam sayı olmalıdır!");			// Kullanıcının girdiği sayının negatifliği test ediliyor.
	else
		for(i=1; i<=s; i++)												// i değişkenine 1 atanıyor, ardından, s değerinin 1'e eşit ya da büyük olduğu test edilip 
			factorial= factorial*i;										// i değişkenini bir arttırarak, sayı tekrar çarpılıp factorial değişkenine atanıyor.
		printf("\n %d! = %d",s,factorial);								// Çıkan sonuç ekrana yazılır.
	return 0;
}
