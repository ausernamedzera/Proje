/*Ad Soyad: Zehra Varan                                                                                                           9.05.2021
Öðrenci Numarasý: 191216051
Dersin kodu_Dersin adý: BIL102_Temel Programlama 2
Proje: 1-Kullanýcýdan Alýnan Dizideki En Büyük Elemaný Bulma */

#include<stdio.h>

int main(){
//deðiþkenler
	int a, i, eleman[100], max; 
	
//dizinin boyutu ve elemanlarý belirlenir.
	printf("Oluþturulacak dizinin kaç elemanlý olacaðýný giriniz(Maximum eleman sayýsý 100'dür):");
	scanf("%d", &a);                                                 
	printf("%d tane dizi elemaný giriniz:\n", a); 
	for(i = 0; i<a; ++i){
		printf("%d. eleman: ", i+1); 
		scanf("%d", &eleman[i]);
	}
	
//kullanýcýnýn oluþturduðu diziyi ekrana basar.
	printf("Oluþturduðunuz dizi:[ ");
	for(i = 0; i<a; ++i){
		printf("%d ", eleman[i]);
	}
	printf("]");
	
//en büyük elemaný bulur ve ekrana basar.
	max = eleman[0];
	for(i = 0; i<a; ++i){
		if (max<eleman[i]){
			max = eleman[i];
		}
	}
	printf("\nOluþturduðunuz dizideki en büyük eleman: %d", max);
	return 0;
}

/* Raporlama */

/*	Deðiþkenler tanýmladým. eleman dizisinin boyutunu 100 olarak sýnýrlandýrdým. Eðer bunu yapmazsam, direkt deðiþkene göre sýnýrlandýðýnda 
program 6.elemandan sonra otomatik olarak kendini durdurdu. i deðiþkeninin türünü for döngüsünün içinde tanýmlamýþtým.
Fakat derlemede hata aldýðým için en baþta tanýmladým, ve sorun çözüldü. Dizinin boyutunu ve dizinin elemanlarýný kullanýcýya býraktým.
Kullanýcýdan aldýðým deðeri a deðiþkenine atadým. Böylelikle dizinin boyutu, kaç elemanlý olacaðý kullanýcý tarafýndan belirlenmiþ oldu.
for döngüsü açarak a elemanlý dizinin her i deðeri için kullanýcýdan deðer belirlemesini istedim.
0'dan baþlayan i deðiþkeni artarak, a'dan büyük olduðu anda for döngüsü tamamlandý ve elemanlar yazýldýðý sýrayla 
eleman[a] dizisinin içine scanf ile atanmýþ oldu.
	Oluþan diziyi yine bir for döngüsü kullanarak ekrana yazdýrdým. Tek for döngüsünde yazmayý denedim ama döngü kendini 
her döndürdüðünde ekrana bir þey yazdýðý için olmasýný istediðim sonucu alamadým. Bu yüzden ayrý ayrý for döngüleri 
kullanarak iþlemlerimi tamamladým.
	En büyük elemaný yazdýrýrken bir kaç kez yazdýðýmý deðiþtirmek zorunda kaldým. Ýlk yazdýðým kod görünürde doðru çalýþýyor gibiydi ama 
deðerler karýþýk yazýldýðýnda en büyük deðeri yanlýþ gösteriyordu. Ýkinci denemede oluþan tek sorun yazýlan dizinin bozulmasýydý. 
Yani en büyük deðer dizideki ilk elemana atanýyor ve böylelikle görünmese bile kullanýcýnýn girdiði ilk dizi bozuluyordu.
Bunu önlemenin bir yolu olarak baþlangýç deðerini max deðiþkenine atadým. For döngüsü ile bütün elemanlarý gezip max deðiþkeninin
küçük olduðu durumlarda max'ýn deðeri büyük olan i'ninci elemanýn deðeri ile eþleþti. Bütün elemanlar dolaþýldýktan sonra,
max'ýn deðerinin en büyük olduðu durum oluþtu ve dizide herhangi bir deðiþiklik olmadan bulunan deðer ekrana basýldý. 
Bu þekilde kod çalýþmasýný doðru bir þekilde tamamlamýþ oldu.
*/
