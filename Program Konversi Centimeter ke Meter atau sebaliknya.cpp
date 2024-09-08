#include <iostream>
#include <iomanip>  // Library untuk mengatur output angka dengan presisi

using namespace std;

int main() {
    int pilihan;
    double cm, m;

    // Menampilkan pilihan kepada pengguna
    cout << "Pilih mode konversi:\n";
    cout << "1. Centimeter ke Meter\n";
    cout << "2. Meter ke Centimeter\n";
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilihan;

    // Mengatur presisi untuk menampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);

    // Konversi berdasarkan pilihan pengguna
    if (pilihan == 1) {
        // Konversi dari Centimeter ke Meter
        cout << "Masukkan jarak dalam centimeter: ";
        cin >> cm;
        m = cm / 100;  // 1 meter = 100 centimeter
        cout << cm << " cm sama dengan " << m << " meter\n";
    }
    else if (pilihan == 2) {
        // Konversi dari Meter ke Centimeter
        cout << "Masukkan jarak dalam meter: ";
        cin >> m;
        cm = m * 100;  // 1 meter = 100 centimeter
        cout << m << " meter sama dengan " << cm << " cm\n";
    }
    else {
        // Jika pilihan tidak valid
        cout << "Pilihan tidak valid! Silakan masukkan 1 atau 2.\n";
    }

    return 0;
}