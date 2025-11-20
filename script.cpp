#include <iostream>

using namespace std;

int main() {

    int jamMasuk, jamKeluar, durasi;
    const int biayaParkir = 5000; 
    cout << "-------------------------------"<<endl;
    cout << " NIM		:  312310520 "<<endl;
    cout << " Nama	:  ANNAS MALIK "<<endl;
    cout << " Kelas	:  TI.23.BA.1 "<<endl;
	cout << "-------------------------------"<<endl;
	
    cout << "Masukkan Jam Masuk: ";
    cin >> jamMasuk;

    cout << "Masukkan Jam Keluar: ";
    cin >> jamKeluar;

    if (jamMasuk < 0 || jamMasuk > 24 || jamKeluar < 0 || jamKeluar > 24 || jamMasuk >= jamKeluar) {
        cout << "Input tidak valid. Pastikan jam mulai dan jam selesai benar." << endl;
        return 1; 
    }

    durasi = jamKeluar - jamMasuk;
    int totalBiaya = durasi * biayaParkir;

    cout << "Total Biaya Parkir anda selama " << durasi << " Jam Adalah " <<  "Rp."  << totalBiaya << endl;

    return 0; 
}
