#include <iostream>
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
