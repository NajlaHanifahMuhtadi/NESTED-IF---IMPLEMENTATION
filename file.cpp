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
    return a / (b*b); //rumus
}

string statusbmi (float bmi){
    if (bmi < 18.5) // Jika BMI kurang dari 18.5 maka Berat Badan Kurang
        return "Berat badan kurang";
    else if (bmi < 25) //Jika BMI kurang dari 25 maka Berat Badan Normal
        return "Berat badan normal";
    else if (bmi <30) //Jika BMI kurang dari 30 maka Berat Badan Kelebihan
        return "Berat badan kelebihan";
    else  //Jika tidak ketiganya maka masuk ke Obesitas
        return "Obesitas";
}

int main(){
    inputbmi();

    float bmi = hitungbmi (berat, tinggi);
    cout << "\n --- Hasil ---" << endl;
    cout << "\nNilai BMI : " << bmi << endl;
    cout << "Status : " << statusbmi (bmi) << endl;

    return 0;
}