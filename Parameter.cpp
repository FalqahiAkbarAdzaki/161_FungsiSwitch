#include <iostream>
using namespace std;

int luas;

void prosedurLuas(int p, int l)
{
	luas = p * l;
}

int fungsiLuas(int p, int l)
{
	return p * l;
}

int main()
{
	int panjang, lebar;
	cout << "Masukkan panjang: ";
	cin >> panjang;
	cout << "Masukkan lebar: ";
	cin >> lebar;

	prosedurLuas(panjang, lebar);
	cout << "Luas persegi panjang dengan prosedur: " << luas << endl;

	cout << "Luas persegi panjang dengan fungsi: " << fungsiLuas(panjang, lebar) << endl;

	return 0;
}