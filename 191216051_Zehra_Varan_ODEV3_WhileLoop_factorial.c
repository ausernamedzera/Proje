// Ad Soyad: Zehra Varan                                                                                                           3.04.2021
// Öğrenci Numarası: 191216051
// Dersin kodu_Dersin adı: BIL102_Temel Programlama 2
// Ödev: Ödev 3 While Döngüsü İle Faktöriyel Hesabı

#include <stdio.h>

int main () {
	int s, i=1, factorial=1;										// Değişkenleri tanımlıyorum i ve factorial değerlerini taban değerini 1'e eşitliyorum ki 
	printf("Faktöriyelini hesaplamak istedğiniz sayıyı girin: "); 	// 0 ya da1 hesaplanırken sonuç 1 ve işlemler sırasında 1 değerinden başlayıp istenilen sayı hesaplanana kadar artmaya devam etsin.
	scanf("%d", &s);												// Kullanıcıdan faktöriyeli hesaplanacak sayı istenir, ve bu sayı değişkene atanır.
	
//	if (s < 0)														// Kullanıcının girdiği sayının negatifliği test ediliyor.
//		printf("Girdiğiniz değer pozitif tam sayı olmalıdır!");
//	else
// 3 Kas�m 21 tarihli edit. Kullan�c� yanl�� girdi girse bile program�n sonlanmamas� i�in while loop kulland�k
//B�ylelikle kullan�c� do�ru de�eri girene dek program �al��maya devam eder.
		while(s<0){
			printf("Pozitif Tam sayi girin l�tfenn!!");
			printf("Faktöriyelini hesaplamak istedğiniz sayıyı girin: "); 	// 0 ya da1 hesaplanırken sonuç 1 ve işlemler sırasında 1 değerinden başlayıp istenilen sayı hesaplanana kadar artmaya devam etsin.
		scanf("%d", &s);
		}
		while(i<=s) {												// Sayı i'ye yani bir değerine kadar devam ettirilecek while döngüsü açılıyor. 
			factorial= factorial*i;									// Sayı 1 değerine ulaşana kadar tekrar çarpılarak, factorial değişkenine atanıyor,
			i++;													// ve i değeri 1 arttırılıyor.
		}
	    printf("\n %d! = %d",s,factorial);							// Çıkan sonuç ekrana yazılıyor.
	return 0;
}
