#include <iostream>
using namespace std;

// Fungsi menghitung diskon
float hitungDiskon(float total){
    if(total >= 500000)
        return total * 0.20; // diskon 20%
    else if(total >= 250000)
        return total * 0.10; // diskon 10%
    else
        return 0; // tidak ada diskon
}

// Fungsi menghitung total bayar
float totalBayar(float total, float diskon){
    return total - diskon;
}

int main(){
    float totalBelanja, diskon, bayar;

    cout << "Masukkan total belanja : ";
    cin >> totalBelanja;

    diskon = hitungDiskon(totalBelanja);
    bayar = totalBayar(totalBelanja, diskon);

    cout << "Diskon = " << diskon << endl;
    cout << "Total yang harus dibayar = " << bayar << endl;

    return 0;
}