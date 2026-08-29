#include<iostream>
#include<locale.h>
using namespace std;

struct ogrenci {
	string isim;
	int ogreniNo;
	double NotOrtalamasý;
};

int main() {
	setlocale(LC_ALL, "turkish");
	ogrenci ogrenci1{ "Mahir Mushab Sert",26254501,3.50 };
	cout << "Öðrenci isim:" << ogrenci1.isim << "\n" << "Öðrenci Numarasý:" << ogrenci1.ogreniNo << "\n" << "Öðrenci Not Ortalmasý:" << ogrenci1.NotOrtalamasý << endl;
	return 0;

}
