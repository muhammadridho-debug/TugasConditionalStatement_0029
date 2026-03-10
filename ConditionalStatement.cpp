#include <iostream>
using namespace std;

void input(float &a, float &b)
{
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan Berat badan (kg) : ";
    cin >> a;
    cout << "Masukkan Tinggi badan (meter) : ";
    cin >> b;
}

float bmi (float a, float b)
{
    return a/(b * b);
}

string status_bmi (float c)
{
    if (c < 18.5)
        return "Berat badan kekurangan";
    else if (c < 25)
        return "Berat Badan Normal";
    else if (c < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main()
{
    float hasil_bmi, bb, tb;
    string status_badan;
    
    input(bb, tb);
   
    hasil_bmi = bmi(bb, tb);

    status_badan = status_bmi(hasil_bmi);

    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << hasil_bmi << endl;
    cout << "Status : " << status_badan << endl;
}