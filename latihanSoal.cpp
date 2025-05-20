#include <iostream>
using namespace std;

class barang{
private:
    string Nama;
    int kodeBarang;
public:
barang(string iNama,int ikodeBarang) {
    Nama = iNama;
    kodeBarang = ikodeBarang;
}
void output(){
        cout << "Nama Barang : " << Nama << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main(){
    barang brg("Pintu Kemana saja", 9999);
    brg.output();

    return 0;
}