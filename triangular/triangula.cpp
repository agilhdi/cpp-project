#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Masukan Angka : ";
    cin >> rows;

    for(int i = 0; i <= rows; i++){

        for(int j = 1; j <= rows-i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout <<" "<< i;
        }
        cout << "\n";
    }

    system("pause");
}