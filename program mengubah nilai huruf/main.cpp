#include <iostream>

using namespace std;

int main()
{
    cout << " Konversi nilai angka ke huruf" << endl;
    cout << "_______________________________" << endl << endl << endl;
    float a;
    cout << "Masukan Nilai: "; cin >> a;
    if (a <= 20)
    { cout << "Nilai anda adalah: E";}
    else if (a <= 40)
    { cout << "Nilai anda adalah: D";}
    else if (a <= 60)
    { cout << "Nilai anda adalah: C";}
    else if (a <= 80)
    { cout << "Nilai anda adalah: B";}
    else { cout << "Nilai anda adalah; A" << endl;}

    return 0;
}

