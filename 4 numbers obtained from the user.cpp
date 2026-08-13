#include<iostream>
#include<locale.h>

using namespace std;

/*
-kullanýcýdan 4 tane tam sayi al.kullanýcýdan alýnan bu 4 sayýyý tam tersi þeklinde ekrana yazdýr.
*/

int main() {
	setlocale(LC_ALL, "Turkish");
	int dizi[4];
	cout << "Sayýlarý Giriniz:"<<endl;
	cout << "-----------------" << endl;
	for (int i = 1;i <= 4;i++) {
		cout << i << ".Sayýyý giriniz:";
		cin >> dizi[i];
	}
	cout << endl;
	cout << "Sayýlarýn Tersten Yazýlmýþ Hali..." << endl;
	for (int i = 4;i >= 1;i--) {
		cout << dizi[i] << " ";
	}
	return 0;
}
