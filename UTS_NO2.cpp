#include <iostream>
using namespace std;
int main()
{
    int pilihan;
    string presiden;

    system ("CLS");
    cout << "Daftar Capres Dan Cawapres:\n";
    cout << "1 \nAnies Baswedan\nMuhaimin Iskandar\n";
    cout << "2 \nPrabowo Subianto\nGibran Rakabuming\n";
    cout << "3 \nGanjar Pranowo\nMahfud MD\n";
    cout << "Masukkan pilihan anda: ";
    cin >> pilihan;

    switch (pilihan)
    {
        case 1:
            presiden = "\nAnies Baswedan\nMuhaimin Iskandar"; break;
        case 2:
            presiden = "\nPrabowo Subianto\nGibran Rakabuming"; break;
        case 3:
            presiden = "\nGanjar Pranowo\nMahfud MD"; break;
        default:
            cout << "Pilihan tidak valid.\n";
    }
    system ("CLS");
    cout << "Suara anda telah disimpan\n";
    cout << "anda menyoblos \n" << pilihan << presiden << endl;
}
