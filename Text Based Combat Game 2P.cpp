#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <typeinfo>

using namespace std;
//oyuncular�n can de�erlerini ekrana yazd�rmay� sa�layan void fonksiyon
void can(int can1, int can2,string oyuncu1, string oyuncu2){
	cout<<oyuncu1<<"'s HP["<<can1<<"] {";
		for (int i=0; i<can1; i++){
			cout<<"|";
			i++;
		}
		cout<<"}     ";
		cout<<oyuncu2<<"'s HP["<<can2<<"] {";
		for (int i=0; i<can2; i++){
			cout<<"|";
			i++;
		}
		cout<<"}"<<endl;
}
bool sans(int dmg){
	srand(time(NULL));
	if (dmg>rand() %100-dmg)
	return true;
	else
	return false;
}

int main(){
	cout<<"****TEXT BASED KOMBAT GAME***"<<endl;
	cout<<"*Welcome To The TEXT BASED KOMBAT Game*"<<endl;
	string oyuncu1,oyuncu2;
	int can1, can2,dmg,hasar;
	int menu,isim,ilk,attack,attack2;
	char cevap;
//Kullan�c� Giri�lerinin al�nd��� oyuna giri� alan�	
	menu:
	can1=100;
	can2=100;
	cout<<"Enter a name for first gamer: ";
	cin>>oyuncu1;
	isim:
	cout<<"Enter a name for second gamer: ";
	cin>>oyuncu2;
	if (oyuncu2==oyuncu1){
		cout<<oyuncu1<<" already taken, please ";
		goto isim;
	}
//oyunun kalbi, oynan�� mekaniklerinin �al��t��� alan
	while(true){
		//y�zde ellilik �ansla hangi oyuncunun ilk ba�layaca��n� se�en k�s�m
			srand(time(0));
			ilk= rand() % 2+1;
			can(can1,can2,oyuncu1,oyuncu2);
		//random se�ilen de�erin sonucuna g�re if blo�uyla ��kan sonucu test edip duruma uygun 2 ayr� kullan�c� alan� olu�turma
		if(ilk==1){
	cout<<oyuncu1<<" got the first chance to attack!"<<endl;
	attack:
	cout<<oyuncu1<<" Attack!: "<<endl;
	cout<<" choose the damage of the attack(max=50, min=1): ";
	cin>>dmg;
	//��zemedi�im ilk hata e�er kullan�c� sald�r� de�erine string ya da char tipinde de�er girerse program sonsuz d�ng�ye giriyor
	if(dmg<=0||dmg>50)
	{
		cout<<"your attack damage must be between 0-51"<<endl;
	goto attack;
	}
	sans(dmg);
	if (sans(dmg)==true){
	cout<<oyuncu1<<" made "<<hasar<<" damage!!!"<<endl;
	can2=can2-dmg;
	}
	else
	cout<<"Attack failed";
	can(can1,can2,oyuncu1,oyuncu2);
	if (can2<=0){
			cout<<oyuncu2<<" lost:("<<endl; 
			cout<<"The WINNER is: "<<oyuncu1<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y'){
			goto menu;
		}
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
	cout<<oyuncu2<<" Attack!: "<<endl;
	cin>>dmg;
	sans(dmg);
	if (sans(dmg)==true){
	cout<<oyuncu2<<" made "<<hasar<<" damage!!!"<<endl;
	can1=can1-dmg;
	}
	else
	cout<<"Attack Failed :::(";
	can(can1,can2,oyuncu1,oyuncu2);
	if (can1<=0){
			cout<<oyuncu1<<" lost:("<<endl; 
			cout<<"The WINNER is: "<<oyuncu2<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y')
			goto menu;
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
	goto attack;
	
	}
	
	//yukar�daki kod mant���n�n ayn�s� yaln�zca oyuncu2'nin �nce ba�lad��� bir durumda kodun do�ru �al��mas� i�in 
	//yap�lacan ufak tefek de�i�iklikleri i�eren else blo�u
	else{
	
	cout<<oyuncu2<<" got the first chance to attack!"<<endl;
	attack2:
	cout<<oyuncu2<<" Attack!: "<<endl;
	cout<<"Choose the damage of the attack(max=50, min=1): ";
	cin>>dmg;
	if (dmg<=0||dmg>50){
	cout<<"your attack damage must be between 0-51"<<endl;
	goto attack2;
	}
	hasar=rand()%(100-dmg);
	cout<<oyuncu2<<" made "<<hasar<<" damage!!!"<<endl;
	can1=can1-hasar;
	can(can1,can2,oyuncu1,oyuncu2);
	
	if (can1<=0){
			cout<<oyuncu1<<" lost."<<endl; 
			cout<<"The WINNER is: "<<oyuncu2<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y')
			goto menu;
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
		
	cout<<oyuncu1<<" Attack!: "<<endl;
	cin>>dmg;
	hasar=rand()%(100-dmg);
	cout<<oyuncu2<<" made "<<hasar<<" damage!!!"<<endl;
	can2=can2-hasar;
	can(can1,can2,oyuncu1,oyuncu2);
		
		if (can2<=0){
			cout<<oyuncu2<<" lost."<<endl; 
			cout<<"The WINNER is: "<<oyuncu1<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y'){
			goto menu;
		}
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
	goto attack2;

	}
	break;
	}
	return 0;
}
