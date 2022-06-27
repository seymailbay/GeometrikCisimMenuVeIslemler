#include <iostream>
using namespace std;

int menu(){
	int secenek ;
	cout << "karenin alanini hesaplamak icin (1)" << endl ; 
	cout << " ücgenin cevresini hesaplamak icin (2) " << endl; 
	cin >> secenek ; 
	return secenek ;
	
	
}


int kare_alan (){
	int kenar;
	cout << " karenin kenarini girin: " ;
	cin >> kenar;
	cout << kenar * kenar;
}

int  ucgen_cevre (){
	int kenar1,kenar2,kenar3,kenar_toplam =0 ;
	cout << " 1.kenari girin " ;
	cin >> kenar1;
	cout << " 2.kenari girin ";
	cin >> kenar2;
	cout << "3. kenari girin ";
	cin >> kenar3;
	kenar_toplam = kenar1 + kenar2 + kenar3;
	cout <<  kenar_toplam ;
	
	
}

main (){
	int sec;
	sec = menu();
		cout << sec;
		switch (sec){
			case 1:{
				kare_alan();
				break;
			}
			case 2:{
				ucgen_cevre();
				break;
			}
		}
	}

