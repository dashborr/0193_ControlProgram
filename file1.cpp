#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    int x;

    srand(time(0));
    
    x = rand() % 10;

    if(x > 9){

        cout << "Angka besar = " << x;
    }else{

        cout << "Angka kecil = " << x;
    }
}