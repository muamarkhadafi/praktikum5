#include <iostream>

using namespace std;

void Luaspersegipanjang()
{
 int panjang,lebar;

 cout << "Masukkan panjang: "; cin >> panjang;
 cout << "Masukkan lebar: "; cin >> lebar;

 cout<<"Luas persegi: " << panjang*lebar;
}

int main()
{
 Luaspersegipanjang();
 return 0;
}
