#include<iostream>,

using namespace std;

struct ogrenci{
	int ogrenciNo;
	string isim;
	double notortalmasý;
};

int main() {
	ogrenci ogrenci1;
	ogrenci1.ogrenciNo = 26254501;
	ogrenci1.isim = "mahir mushab sert";
	ogrenci1.notortalmasý = 3.50;

	cout <<"Ogrneci No:" << ogrenci1.ogrenciNo<<"\n"<<"Isim:"<<ogrenci1.isim<<"\n"<<"Ortalama:" << ogrenci1.notortalmasý << endl;
	return 0;
}
