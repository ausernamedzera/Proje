#include <iostream>
using namespace std;

int main(){
	int bilet=50, istenilenbilet, menu;
	char biletal;
	menu: 
	cout<<"bilet almak isterseniz 'e' istemiyorsanýz 'h'ye basýn: "<<endl;
	cin>>biletal;
	for (;bilet>0;){
		if(biletal=='e'|| biletal=='E'){
		cout << "kaç bilet istersiniz? "<<endl;
		cin >> istenilenbilet;
		if (bilet>= istenilenbilet){
		bilet-=istenilenbilet;
		cout<<bilet<<"kadar bilet kaldý!" << endl;
		cout<<"Bilet almaya devam etmek ister misiniz?";
		cin>>biletal;
		if(biletal=='h'|| biletal=='H'){
			cout<<"Bilet almaya her zaman bekleriiz Tukenmeden Geliiin!!!"<<endl;
			break;
		}
		}
	}
		else if(biletal=='h'||biletal=='H'){
			cout<<"Bilet almaya her zaman bekleriiz Tukenmeden Geliiin!!!"<<endl;
			break;
		}
		else{
			cout<<"Hatali giris!!"<<endl;
			goto menu;
		}
		if(bilet==0){
			cout<<"Biletler Tükendiiiiii";
		}
	}
	return 0;
}

