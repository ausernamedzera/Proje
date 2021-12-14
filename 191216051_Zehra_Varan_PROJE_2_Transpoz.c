/*Ad Soyad: Zehra Varan                                                                                                           19.05.2021
Öðrenci Numarasý: 191216051
Dersin kodu_Dersin adý: BIL102_Temel Programlama 2
Proje: 2-Oluþturulan Matrisin Transpozesini alma */

#include<stdio.h>

int main(){
	//deðiþkenler
	int m,n,matrix[9][9],transpoz[9][9],i,j;
	//kullanýcýdan alýnan satýr ve sütun deðerleri
	printf("Matrisin satýr ve sütun sayýlarýný belirleyiniz: ");
	printf("\nSatýr Sayýsý: ");
	scanf("%d", &m);
	printf("Sütun Sayýsý: ");
	scanf("%d",&n);
	//satýr ve sütun deðerlerinin 4ten küçük 9dan büyük olma durumlarýný test etme
	if (m<4 || m>9 || n<4 || n>9){
		printf("Satýr veya Sütun Sayýsý 4ten küçük 9dan büyük olmamalý!");
		return 0;
	}
	//kullanýcýdan matris elemaný isteme
	printf("%d tane eleman giriniz:\n", m*n);
	for(i=0; i<m; ++i){
		for(j=0; j<n; ++j){
			printf("a%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	//kullanýcýn oluþturduðu matrisi ekrana basma
	printf("Oluþturulan matris:\n");
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	//oluþan matrisin transpozunu alma ve ekrana basma
	for(i=0; i<m; ++i){
		for(j=0; j<n; j++){
			transpoz[j][i] = matrix[i][j];
		}
	}
	printf("Oluþturulan matrisin transpozu:\n");
	for(i=0; i<n; ++i){
		for(j=0; j<m; j++){
			printf("%d ", transpoz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/* Raporlama */

/*	Kullanýcýdan alýnan satýr ve sütun deðerleri önce if bloðunda test edilecektir. Soruda satýr ve sütun sayýlarý 4 ve 9 arasýnda sýnýrlý tutulduðundan
bu test gerçekleþtirilecektir. Uygun koþullarýn saðlanmasý durumunda kullanýcýdan matris elemanlarýný girmesi istenir. for döngüsü kullanýlarak,
kullanýcýdan her döngüde bir deðer alýnýr ve her döngüde alýnan deðerler matrix[9][9]e atanýr. En dýþtaki i döngüsü satýrlarý oluþtururken
j döngüsü ise sütun elemanlarýný oluþturmaktadýr. Kod, matrisi satýrlarý doldurarak oluþturur. Kullanýcý kaçýncý elemaný nereye yerleþtirdiðini görmesi için 
printf içine i ve j deðerlerini yazarak ve onlarý arttýrarak sýrayla kullanýcýnýn kaçýncý satýr ve sütunda olduðu gösterilir. 
	Kullanýcýnýn oluþturduðu matris bir baþka iç içe geçmiþ for döngüsü ile ekrana basýlýr. Ekrana basma sýrasýnda bir diðer satýrdaki
Elemanlar yan yana deðil de alt alta yazýlmasý için en dýþtaki for döngüsüne printf içinde \n yazýlarak, j döngüsü tamamlandýðýnda kod, 
alt satýra geçer ve diðer döngü baþlar.
	Sorudan bir diðer istenen durum ise kullanýcýnýn oluþturduðu matrisin transpozunu almak. Yeni oluþacak matrisin içine yazýlmasý için
ayrý bir matris oluþturulur. Oluþturulan bu matrisin elemanlarý j ve i þeklinde ters yazýlarak döngünün en iç kýsmýnda ilk oluþturulan matrise eþitlenir.
Böylelikle transpoz[j][i] þeklinde yazýlan matris, matrix[i][j] elemanlarýna eþlenir yani transpozun j ve i elemanlarý matrixin i ve j elemanlarýyla eþleþir.
	Transpozu ekrana basarken i ve j deðerleri transpoz[i][j] halinde yazýlarak atanan deðerler ters döner ve satýr elemanlarý sütun elemanlarýna,
sütun elemanlarý da satýr elemanlarýna yazýlýr.
	Böylelikle soruda bizden istenenler tamamlanmýþ olur ve kod biter.
*/
