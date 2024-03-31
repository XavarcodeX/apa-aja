#include <iostream>
using namespace std;

int main() {
    char nama[100] = "Dimas Prasetya50";
    puts("siwa yang bernama ");
    puts(nama);
    int a, b, c;

    cout << "Menghitung rata-rata\n";
    cout << "-------------------------\n";
    cout << "Tanpa Dengan \n";
    cout << "Konversi Konversi \n";
    cout << "-------------------------\n";

    // Nilai keaktifan//
    // Nilai Tugas//
    //Nilai ujian//
    cout << "Inputkan nilai a: ";
    cin >> a;
    cout << "Inputkan nilai b: ";
    cin >> b;
    cout << "inputkan nilai c:";
    cin >> c;

    // Menggunakan operator perkalian\\
    c = a * 20 / 100;
    cout << "Hasil Nilai keaktifan adalah = " << c << endl;
    
    // Menggunakan operator perkalian\\
    c = b * 50 / 100;
    cout << "Hasil Nilai Tugas adalah = " << c << endl;
    
    // Menggunakan operator perkalian\\
    c = c * 30 / 100;
    cout << "Hasil Nilai Tugas adalah = " << c << endl;

    return 0;

}
