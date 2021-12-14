// Ad Soyad: Zehra Varan                                                                                                           3.04.2021
// Öğrenci Numarası: 191216051
// Dersin kodu_Dersin adı: BIL102_Temel Programlama 2
// Ödev: Ödev 3 Switch Yapısı ile Basit Hesap Makinesi

#include <stdio.h>			

int main() {
	char islem;                // Bu iki satırda değişkenlerimiz tanımlanıyor.
	float ilksay, ikincisay;
	
	printf("Hesaplama işleminizi seçin '+, -, *, /': ");   // Kullanıcıdan hesaplama yapmsı için öncelikle bir işlem seçmesi istenir.
	scanf("%c", &islem);                      
	printf("Hesaplanacak ilk sayıyı girin; ");             // Ardından kullanıcının hesap yapapacağı sayılar istenir.			   
	scanf("%f", &ilksay);				
	printf("Hesaplanacak ikinci sayıyı seçin; "); 		   // scanf ile kullanıcının girdiği değerler değişkenlere atanır.
	scanf("%f", &ikincisay);
	
	
	switch (islem) {															 // switch yapısı ile kullanıcının islem değişkeni için girdiği değeri kontrol eder
		case '+':
			printf("%.f + %.f = %.f", ilksay, ikincisay, ilksay + ikincisay);	
			break;
		case '-':
		    printf("%.f - %.f = %.f", ilksay, ikincisay, ilksay - ikincisay);	// Kullanıcının girdiği değer için eşleşen hangi case varsa, değer o case bloğunun içine girer.
			break;																// printf ile çıkan sonuç ekrana basılır.
		case '*':																// break ile case yapısı sonlandırılır.
			printf("%.f * %.f = %.f", ilksay, ikincisay, ilksay * ikincisay);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f", ilksay, ikincisay, ilksay / ikincisay);
			break;
		default:                                                                          // Eğer kullanıcının girdiği değer case içindeki değerlerle uyuşmazsa
			printf("5. işlem henüz bilinmiyor, 4 işlemlenden birini seçmeniz gerekli!");  // default ile hata mesajı kullanıcının ekranına yazılır.
	    
	}
	return 0;
}