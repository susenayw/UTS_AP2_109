#include <iostream>
using namespace std;
int main()
{
    int n;
    int jumlah = 0;

    system ("CLS");
    cout << "Masukkan nilai n : ";
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        jumlah += i * i;
    }
    
    system ("CLS");
    cout << "Jumlah semua kuadrat bilangan ganjil dari 1 sampai " << n << " adalah : " << jumlah << endl;
}
