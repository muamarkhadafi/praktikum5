# Praktikum5


## Latihan1 **fungsi sederhana**
**Alur Algoritma**
1. mulai program fungsi sederhana dengan menggunakan void
2. deklarasikan fungsi menggunakan void dengan nama fungsi yang ingin kita masukan ( void Luaspersegipanjang()) --> void(type data)
   --> Luaspersegipanjang(nama fungsi) yang ingin kita masukan

3. masukan rumus yang ingin kita jadikan fungsi sederhana
4. end

**Code Program**
```
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
```

**hasil**
![hsl](https://raw.githubusercontent.com/Amirul29/Praktikum5/master/latihan1/1.png)

## latihan **mengambangkan aplikasi dengan menggunakan fungsi dari hasil praktikum sebelumnya**
**Alur Algoritma**
1. mulai program fungsi dengan menggunakan void
2. deklarasiakan praktikum yang ingin kita jadikan kumpulan fungsi di nama fungsi setelah type data
   ```	void Hitung_luas();
	void ganjil_genap();
	void besar_kecil();
   ```
3. gunakan rumus **do while** untuk mengulang **swicth dan case** untuk memilih program pada saat di run
4. masukan program/data dari praktikum sebelumnya kedalam satu file fungsi
5. end

**Code Program**
```
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
```
![hsl](https://raw.githubusercontent.com/Amirul29/Praktikum5/master/latihan2/2.png)

## latihan 3 **mngembangkan aplikasi dengan menggunakan header(memisah fungsi kedalam file yang berbeda)**
**Alur Algoritma**
1. mulai program fungsi dengan menggunakan header untuk memanggil fungsi
2. deklarasiakan fungsi yang terdapat dalam file berbeda praktikum yang ingin kita jadikan kumpulan fungsi untuk membuat header untuk di panggil dalam file lain
3. gunakan rumus **do while** untuk mengulang **swicth dan case** untuk memilih program pada saat di run
4. masukan program/data dari praktikum sebelumnya kedalam satu file yang berbeda untuk file header fungsi
5. end

**Code Program**
**file header**
```
#ifndef FUNGSI1_H_INCLUDED
#define FUNGSI1_H_INCLUDED

using namespace std;
void nilai_terbesar_darinilaiacak() {
    cout<< "Muamar khadafi"<<endl;
    cout<< " ______________________________________________________________"<<endl;
    cout<< "|Algoritma Mencari Nilai Terbesar Dari Bilangan Yang Diinputkan|"<<endl;
    cout<< "|______________________________________________________________|"<<endl;
    int max,A;
    max=0;

    do{
        cout<< "masukin nilai yang ingin di masukan :"; cin >> A;
        if (max<A)
            max=A;
    }
    while (A!=0);
    cout<< "hasilnya = " <<max<< endl;
    cout<< "Terima Kasih"<<endl;

}
void Nilai_terbesar_4()
{
    int A,B,C,D;
    cout<<"MASUKAN BILANGAN 1: ";
    cin>> A;
    cout<<"MASUKAN BILANGAN 2: ";
    cin>> B;
    cout<<"MASUKAN BILANGAN 3: ";
    cin>> C;
    cout<<"MASUKAN BIANGAN 4: ";
    cin>> D;

    if (A>B && A>C && A>D) cout << "bilangan terbesar = " << A << endl;
    else

    if (B>A && B>C && B>D) cout << "bilangan terbesar = " << B << endl;

    else {
        if (C>A && C>B && C>D) cout << "bilangan terbesar = " << C << endl;
        else
            cout << "bilangan terbesar = " << D << endl;
    }
}
void nilai_terbesar_3(){
    int A,B,C;
    cout<<"MASUKAN BILANGAN 1: ";
    cin>> A;
    cout<<"MASUKAN BILANGAN 2: ";
    cin>> B;
    cout<<"MASUKAN BILANGAN 3: ";
    cin>> C;

    if (A>B) {
            if (A>C)
            cout<< "BILANGAN TERBESAR ADALAH" << A << endl;
    else
        cout<< "BILANGAN TERBESAR ADALAH" << C << endl;
    } else {
    if (B>C) {
        cout<< "BILANGAN TERBESAR ADALAH" << B << endl;
    }
    else {
        cout<< "BILANGAN TERBESAR ADALAH" << C << endl;
    }


    }
}

void Mengurut_nilai_terbesar()
{
    int A,B,C;
    cout<<"MASUKAN BILANGAN 1: ";
    cin>> A;
    cout<<"MASUKAN BILANGAN 2: ";
    cin>> B;
    cout<<"MASUKAN BILANGAN 3: ";
    cin>> C;

    if (A<B){
      if (B<C)
            cout<< "Bilangan Terbesar Adalah:" << A << ","<< B <<","<< C << endl;
    else
        if (A<C)
            cout << "Bilangan Terbesar Adalah: " << A << ' '<< C << ' '<< B << endl;
        else cout << " Bilangan Terbesar Adalah: " << C << ' '<< A << ' '<< B << endl;
    }else {
    if (A<C)
        cout << " Bilangan Terbesar Adalah: " << B << ' '<< A << ' ' << C << endl;
    else
        if (B<C)

        cout<< "Bilangan terbesar Adalah: " << B << ' ' << C << ' ' << A << endl;
    else
        cout << " Bilangan Terbesar Adalah: " << C << ' '<< B << ' '<< A << endl;
    }


}
void Program_kasir()
{


    cout<< "|                  Muamar khadafi                     |"<<endl;
    cout<< "|-----------------------------------------------------|"<<endl;
    cout<< "|Tugas Praktikum4"<< "Program Menghitung Total Belanja     |"<< endl;
    cout<< "|-----------------------------------------------------|" <<endl;
    int jumlah_beli=0,total_beli=0,x,y,a;
    long int
    harga=0,harga_barang=0,total=0,bayar=0,diskon;
    cout<< "Masukan Jumlah Barang (N):"; cin>>y;
    x=1;

    while(x<=y)
    {
        cout<< "Barang Ke-"; cin>>a;
        cout<< "Masukan Banyaknya barang: "; cin>>jumlah_beli;
        cout<< "Masukan Harga Barang:Rp"; cin>>harga;
        harga_barang = harga*jumlah_beli;
        total=total + harga_barang;
        total_beli += jumlah_beli;
        x++;
    }
    if(total>=1000000)
    {
        diskon=total*10/100;
    }
    else if (total>500000&&total<1000000)
    {
        diskon=total*5/100;
    }else{
    diskon=0;
    }
    bayar=total-diskon;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Total Barang Yang Di Beli    :"  <<total_beli<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Total Semua Pembelian        :Rp"     <<total<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Mendapatkan Diskon Sebesar   :Rp"    <<diskon<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< "           Total Yang Harus Di Bayar    =Rp"     <<bayar<<endl;
    cout<< "|----------------------------------------------------|" <<endl;
    cout<< " Terima Kasih"<< endl;
}









#endif // FUNGSI1_H_INCLUDED
```
**file yang memanggil fungsi**
```#include <iostream>
#include<fungsi1.h>

using namespace std;

int main()
{
    int a;


    do {

        cout << "------------------------------------------\n";
        cout << "1. Mencari nilai terbesar dari nilai acak \n";
        cout << "2. Nilai terbesar dari 4 bilangan\n";
        cout << "3. Nilai terbesar dari  bilangan\n";
        cout << "4. Mengurut Nilai Dari yang terbesar\n";
        cout << "5. Program Kasir\n";
        cout << "0. keluar\n";
        cout << "------------------------------------------\n";
        cout << "\nmasukan pilihan : ";
        cin >> a;


        switch(a)
        {
        case 1 :
            nilai_terbesar_darinilaiacak();
            break;
        case 2 :
            Nilai_terbesar_4();
            break;
        case 3:
            nilai_terbesar_3();
            break;
        case 4:
            Menngurut_nilai_terbesar();
            break;
        case 5:
            Program_kasir();
            break;
        }

    }while(a!=0);
    }
```