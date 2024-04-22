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

        float hitungLuas (){
            return panjang * lebar;
        }

        void display() {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungLuas() << endl;
        }
};

int main () {
    BangunDatar pp;  //deklarasi objek pp dari class BangunDatar
    pp.input();
    pp.display();
}