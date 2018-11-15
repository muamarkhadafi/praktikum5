#ifndef FUNGSI1_H_INCLUDED
#define FUNGSI1_H_INCLUDED

using namespace std;
void nilai_terbesar_darinilaiacak() {
    cout<< "Muhamad Amirul Fiqhi"<<endl;
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

void Menngurut_nilai_terbesar()
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


    cout<< "|              Muhamad Amirul Fiqhi                   |"<<endl;
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
