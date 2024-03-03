#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Vehicle.cpp"

using namespace std;

class Garage {
 private:
  string nama;
  int luas;
  int kapasitas;
  int jumlah_kendaraan;
  // composite atribute
  /*
      menggunakan vector of Vehicle
      karena Vehicle merupakan parent dari Car dan Motorcylce

      // konsep menggunakan polymorfisme
      menggunakan shared pointer untuk bisa menunjuk ke alamat yang sama si
     vector vehicle, biar nanti bisa nyimpen dua macam objek yang berbeda dalam
     1 vector

     **karena dia smartpointer maka nanti otomatis nge free memory sendiri kalo
     dah gaada yang pake
  */

  vector< shared_ptr< Vehicle > > isiKendaraan;

 public:
  Garage() {}
  Garage(string nama, int luas, int kapasitas) {
    this->nama = nama;
    this->luas = luas;
    this->kapasitas = kapasitas;
    this->jumlah_kendaraan = 0;
  }

  // accessor mutator
  string getNama() { return this->nama; }
  void setNama(string nama) { this->nama = nama; }

  int getLuas() { return this->luas; }
  void setLuas(int luas) { this->luas = luas; }

  int getKapasitas() { return this->kapasitas; }
  void setKapasitar(int kapasitas) { this->kapasitas = kapasitas; }

  int getJumlahKendaraan() { return this->jumlah_kendaraan; }
  void setJumlahKendaraan() { this->jumlah_kendaraan = isiKendaraan.size(); }

  void addKendaraan(shared_ptr< Vehicle > kendaraan) {
    if (isiKendaraan.size() < kapasitas) {
      isiKendaraan.push_back(kendaraan);
      cout << "Berhasil parkir!" << endl;
    } else {
      cout << "=============\n"
           << "Kapasitas Penuh\n"
           << "============= " << endl;
    }
  }
  void showKendaraan() {
    int size = isiKendaraan.size();
    cout << "List Kendaraan yang terparkir\n"
         << "==================\n";
    for (int i = 0; i < size; i++) {
      cout << "Kendaraan ke " << i + 1 << endl;
      isiKendaraan[i]->printDetails();
      cout << endl;
    }
  }

  ~Garage() {}
};