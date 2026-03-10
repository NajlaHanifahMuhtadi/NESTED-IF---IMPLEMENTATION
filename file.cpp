#include <iostream>
using namespace std;

float berat, tinggi; //deklarasi variabel bertipe float(bisa desimal)

void inputbmi(){ //deklarasi fungsi. void = mengembalikan nilai
    cout << "\n--- Selamat Datang Mahasiswa Kelas C 2026 ---" << endl;
    cout << "Masukkan Berat Bandan (Kg) : ";
    cin >> berat;
    cout << "Masukkan Tinggi Basdan (m) : ";
    cin >> tinggi;
}

float hitungbmi (float a, float b){
    return a / (b*b);
}

string statusbmi (float bmi){
    if (bmi < 18.5)
        return "Berat badan kurang";
    else if (bmi < 25)
        return "Berat badan normal";
    else if (bmi <30)
        return "Berat badan kelebihan";
    else
        return "Obesitas";
}