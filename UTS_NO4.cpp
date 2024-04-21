#include <iostream>
using namespace std; // menggunakan namespace std agar tidak perlu mengetik std:: sebelum cin, cout

int main ()
{
    system("CLS"); // menggunakan system("CLS") untuk membersihkan layar
    string a;
    umur: // untuk statement goto
    int umur; // mendeklarasikan variabel umur

    cout << "Tebak Umur Saya : "; // ditutup dengan ;
    cin >> umur; // menggunakan cin untuk input umur
    
    if (umur == 20){ // menggunakan operator (==) untuk memeriksa kesamaan nilai
        cout << "Jawaban Anda Benar" << endl;
    } else { // menggunakan else karena tidak ada kondisi berikutnya
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        goto umur; // untuk kembali ke statement goto bila jawaban salah
    }
    cout << "Program Selesai";
    return 0;
}
