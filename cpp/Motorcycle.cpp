#pragma once
#include <iostream>
#include <string>

#include "Vehicle.cpp"
using namespace std;

class Motorcycle : public Vehicle {
 private:
  string jenis_motor;
  string kapasitas_tangki;

 public:
  Motorcycle() {}
  Motorcycle(string jenis_motor, string kapasitas_tangki) {
    this->jenis_motor = jenis_motor;
    this->kapasitas_tangki = kapasitas_tangki;
  }
  //   overloading baby!
  Motorcycle(string jenis_motor, string kapasitas_tangki, string plat,
             string merk, string tahun, string warna)
      : Vehicle(plat, merk, tahun, warna) {
    this->jenis_motor = jenis_motor;
    this->kapasitas_tangki = kapasitas_tangki;
  }

  // accessor mutator
  string getJenisMotor() { return this->jenis_motor; }
  void setJenisMotor(string jenisMotor) { this->jenis_motor = jenisMotor; }

  string getKapasitasTangki() { return this->kapasitas_tangki; }
  void setKapasitasTangki(string kapasitasTangki) {
    this->kapasitas_tangki = kapasitas_tangki;
  }

  void printDetails() override {
    // kita pake polymorphism
    Vehicle::printDetails();
    cout << "Jenis Motor: " << getJenisMotor() << endl;
    cout << "Kapasitas Tangki: " << getKapasitasTangki() << endl;
  }
  ~Motorcycle() {}
};
