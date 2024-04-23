#include <iostream>
#include <string>

using namespace std;

// Kelas siswa
class Siswa {
private:
    string nama;

public:
    // Konstruktor
    Siswa(string _nama) : nama(_nama) {}

    // Menampilkan data siswa
    void tampilkanData() {
        cout << "Nama siswa: " << nama << endl;
    }
};

// Fungsi untuk input nilai siswa
void inputNilai() {
    string nama;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;

    // Meminta memasukkan nama siswa
    cout << "Masukkan nama siswa: ";
    cin >> nama;

    // Memasukkan nilai keaktifan
    cout << "Masukkan nilai keaktifan: ";
    cin >> nilai_keaktifan;

    // Memasukkan nilai tugas
    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;

    // Memasukkan nilai ujian
    cout << "Masukkan nilai ujian: ";
    cin >> nilai_ujian;

    // Menghitung persentase nilai
    float persentase_keaktifan = nilai_keaktifan * 20 / 100;
    float persentase_tugas = nilai_tugas * 30 / 100;
    float persentase_ujian = nilai_ujian * 50 / 100;

    // Menghitung nilai rata-rata
    float nilaiRataRata = (persentase_keaktifan + persentase_tugas + persentase_ujian);

    // Membuat objek Siswa berdasarkan input nama
    Siswa siswa(nama);

    // Menampilkan data siswa
    siswa.tampilkanData();

    // Menampilkan nilai rata-rata
    cout << "Nilai rata-rata siswa adalah: " << nilaiRataRata << endl;

    // Menentukan grade berdasarkan nilai rata-rata
    char grade;
    if (nilaiRataRata > 80) {
        cout << "Selamat! Anda mendapatkan Grade A." << endl;
        grade = 'A';
    } else if (nilaiRataRata >= 75) {
        cout << "Anda mendapatkan Grade B." << endl;
        grade = 'B';
    } else if (nilaiRataRata >= 65) {
        cout << "Anda mendapatkan Grade C." << endl;
        grade = 'C';
    } else {
        cout << "Anda mendapatkan Grade D." << endl;
        grade = 'D';
    }
}

int main() {
    // Memanggil fungsi untuk input nilai
    inputNilai();

    return 0;
}