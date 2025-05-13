#include <iostream>
using namespace std;

class buku{
    string judul;

    public:
        string setget(string jdl){
            this->judul = jdl; // nilai parameter "judul" untuk member variable "judul"
            return this->judul; // return variable judul0.
        }
};