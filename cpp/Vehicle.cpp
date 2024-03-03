#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
 private:
  string plat_nomor;
  string merk;
  string tahun_produksi;
  string warna;

 public:
  // construktor kosong
  Vehicle() {}

  Vehicle(string plat, string merk, string tahun, string warna) {
    this->plat_nomor = plat;
    this->merk = merk;
    this->tahun_produksi = tahun;
    this->warna = warna;
  }

  // setter getter
  string getPlat() { return this->plat_nomor; }
  void setPlat(string plat) { this->plat_nomor = plat; }

  string getMerk() { return this->merk; }
  void setMerk(string merk) { this->merk = merk; }

  string getTahunProduksi() { return this->tahun_produksi; }
  void setTahunProduksi(string tahun) { this->tahun_produksi = tahun; }

  string getWarna() { return this->warna; }
  void setWarna(string warna) { this->warna = warna; }
  virtual void printDetails() {
    cout << "Plat Nomor: " << getPlat() << endl;
    cout << "Merk: " << getMerk() << endl;
    cout << "Tahun_produksi: " << getTahunProduksi() << endl;
    cout << "Warna: " << getWarna() << endl;
  }
  ~Vehicle() {}
};
