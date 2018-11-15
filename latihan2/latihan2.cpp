#include <iostream>
using namespace std;

void Hitung_luas();
void ganjil_genap();
void besar_kecil();


int main()
{
    int a;


    do {
        cout << "___________________________________\n"<< endl;
        cout << "1. hitung luas \n";
        cout << "2. mencari ganjil genap\n";
        cout << "3. Mencari Besar Kecil Bilangan\n";
        cout << "0. keluar\n";
        cout << "___________________________________\n"<< endl;
        cout << "\nmasukan pilihan : ";
        cin >> a;

        switch(a)
        {
        case 1 :
            Hitung_luas();
            break;
        case 2 :
            ganjil_genap();
            break;
        case 3:
            besar_kecil();
            break;
        }

    }while(a!=0);
}
void ganjil_genap()
{
    int nilai,hasil;
    cout << "menentukan ganjil dan genap" << endl;
    cout << "masukan nilai = ";
    cin >> nilai;
    hasil= nilai%2;
    cout << "hasilnya adalah = ";
    if (hasil==0)
        cout << "genap"<<endl;
    else
        cout << "ganjil" <<endl;
}
void Hitung_luas()
{
int p,l,luas;
cout<<"masukan panjjang persegi panjang: ";
cin>>p;
cout<<"masukan lebar persegi panjang: ";
cin>>l;

luas=p*l;
cout<<"luas persegi panjang adalah " <<luas <<endl;
}
void besar_kecil()
{
    int angka1,angka2,besar,kecil;
    cout << "masukan angka ke-1: ";
    cin >> angka1;
    cout << "masukan angka ke-2: ";
    cin >> angka2;

    besar= angka1 > angka2 ? angka1 : angka2;
    kecil= angka1 < angka2 ? angka1 : angka2;

    cout << endl;
    cout << "angka"<< " " << besar << " "<< " lebih besar dari angka  "  << kecil << endl;
    cout << "angka" <<" " << kecil << " "<< " lebih kecil dari angka  "  << besar << endl;
}

