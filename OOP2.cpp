#include <iostream>
using namespace std;

class BangunDatar{

    // akses modifier
    private:
        float panjang, lebar;
    public:
        float Luas;

        void input() {  //metode input persegi panjang
            cout << "Masukan Panjangnya = ";
            cin >> panjang;
            cout << "Masukan Lebarnya = ";
            cin >> lebar;
        }
};