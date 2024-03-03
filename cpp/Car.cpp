#pragma once
#include <iostream>
#include <string>

#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle {
 private:
  string jumlah_pintu;
  string jumlah_kursi;

 public:
  Car() {}
  Car(string jumlah_pintu, string jumlah_kursi) {
    this->jumlah_pintu = jumlah_pintu;
    this->jumlah_kursi = jumlah_kursi;
  }
  // constructor : overloading (delegation)
  /*
      disaat constructor yang  berisi atribut Vehicle dipanggil, maka nanti
     atribut data yang terdapat disini bakal di oper ke construktor yang ada di
     Vehicle

      Contructor Car --> manggil Constructor Vehicle (passing atribut nya juga)
  */
  Car(string jumlah_pintu, string jumlah_kursi, string plat, string merk,
      string tahun, string warna)
      : Vehicle(plat, merk, tahun, warna) {
    this->jumlah_pintu = jumlah_pintu;
    this->jumlah_kursi = jumlah_kursi;
  }

  // setter getter
  /*
      Getter is Accessor --> tempat mengakses
      Setter is Mutator --> tempat mengganti
  */
  string getJumlahPintu() { return this->jumlah_pintu; }
  void setJumlahpintu(string jumlahPintu) { this->jumlah_pintu = jumlahPintu; }

  string getJumlahKursi() { return this->jumlah_kursi; }
  void setJumlahKursi(string jumlahKursi) { this->jumlah_kursi = jumlahKursi; }

  void printDetails() override {
    // kita pake polymorphism
    Vehicle::printDetails();
    cout << "Jumlah Pintu : " << getJumlahPintu() << endl;
    cout << "Jumlah Kursi : " << getJumlahKursi() << endl;
  }

  ~Car() {}
};