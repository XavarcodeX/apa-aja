#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a, i, j, result;
    cout << "input: ";
    cin >> a;
    for (int i = 1; i <= a; i += 2) {
        int result = 1;
        //inisialisasi hasil perkalian
        for (int j = 1; j <= i; j +=2) {
            if (j != 1)
                cout << "*";
            cout << j;
            result *= j;
        }
        cout << "=" << result << endl;
        cout << endl;
    }
    return 0;
}