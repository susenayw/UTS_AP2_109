#include <iostream>
using namespace std;
int main()
{
    string nama, nim, matkul, pa;
    float tugas, quiz, uts, uas, n;
    char kom, na;

    system ("CLS");
    cout << "Masukkan Nama              : ";
    getline(cin, nama);
    cout << "Masukkan NIM               : ";
    getline(cin, nim);
    cout << "Masukkan Kom               : ";
    cin >> kom;
    cin.ignore();
    cout << "Masukkan Mata Kuliah       : ";
    getline(cin, matkul);
    cout << "Masukkan Nilai Tugas       : ";
    cin >> tugas;
    cout << "Masukkan Nilai Quiz        : ";
    cin >> quiz;
    cout << "Masukkan Nilai UTS         : ";
    cin >> uts;
    cout << "Masukkan Nilai UAS         : ";
    cin >> uas;
    cin.ignore();
    cout << "Masukkan Nama Dosen PA     : ";
    getline(cin, pa);

    n = (tugas + quiz + uts + uas)/4;

    if (n >= 85)
    {
        na = 'A';
    }else if (n >= 70)
    {
        na = 'B';
    }else if (n >= 60)
    {
        na = 'C';
    }else if (n >= 50)
    {
        na = 'D';
    }
    else { na = 'E';
    }

    system ("CLS");
    cout << "Nama           : " << nama << endl;
    cout << "NIM            : " << nim << endl;
    cout << "Kom            : " << kom << endl;
    cout << "Mata Kuliah    : " << matkul << endl;
    cout << "Nilai          : " <<  na << endl;
    cout << "Dosen PA       : " << pa << endl;
}
