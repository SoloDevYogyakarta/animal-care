#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string nama_petugas;
  string nama_pemilik;
  int jumlah;
  string lanjut;
  string data;
  bool start = true;
  string info;

  string kode_hewan;
  string counter;
  int biaya;
  int kode_perawatan;
  string jumlah_hewan;
  int total_bayar;
  int uang_bayar;
  
  while(start) {
    cout << "" << endl;
    cout << "" << endl;
    cout << "  PENITIPAN HEWAN PELIHARAAN" << endl;
    cout << "       MEAOW PET CARE" << endl;
    cout << "  =**************************=" << endl; 


    cout << "Nama Petugas : ";
    cin >> nama_petugas;
    cout << "Nama Pemilik : ";
    cin >> nama_pemilik;
    cout << "Jumlah Data Peliharaan : ";
    cin >> jumlah;
    cout << "" << endl;
    cout << "Hewan Ke-<counter> : ";
    cin >> counter;
    cout << "Kode Jenis Hewan [K/H/B] : ";
    cin >> kode_hewan;
    cout << "Kode Perawatan [1/2] : ";
    cin >> kode_perawatan;
    cout << "Jumlah Hewan : ";
    cin >> jumlah_hewan;

    if(kode_hewan == "H") {
      if(kode_perawatan == 1) {
        biaya = 150000;
      } else biaya = 100000;
    }
    if(kode_hewan == "K") {
      if(kode_perawatan == 1) {
        biaya = 250000;
      } else biaya = 300000;
    }

    cout << "OUTPUT" << endl;
    cout << "" << endl;
    cout << "  PENITIPAN HEWAN PELIHARAAN" << endl;
    cout << "       MEAOW PET CARE" << endl;
    cout << " =**************************=" << endl; 
    cout << "Nama Petugas : " << nama_petugas << endl;
    cout << "Nama Pemilik : " << nama_pemilik << endl;
    cout << "" << endl;
    cout << "============================" << endl;
    cout << "  No  " << "  Jenis Hewan  " << "  Biaya Perawatan  " << "  Jumlah Hewan  " << "  Subtotal  " << endl;
    cout << "  1  " << "     " + counter + "  " << "        Rp" << biaya <<"  " << "            "+ jumlah_hewan+"         Rp" << stoi(jumlah_hewan) * biaya  << endl; 
    cout << "============================" << endl;
    cout << "                                           " << "Total Bayar  : Rp" << stoi(jumlah_hewan) * biaya << endl;
    cout << "                                           " << "Uang Bayar   : Rp";
    cin >> uang_bayar;
    cout << "                                           " << "Uang Kembali : " << "Rp" << uang_bayar - (stoi(jumlah_hewan) * biaya) << endl;
    
    cout << " INPUT DATA LAGI [Y/T] : ";
    cin >> info;
    if (info == "T") {
      start = false;
    }
  }

  return 0;
}










