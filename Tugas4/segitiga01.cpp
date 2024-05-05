#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a, i, j, jum;
    cout << "input: ";
    cin >> a;
    for (i = 2; i <= a; i += 2) {
        jum = 0;
        for (j = 2; j <= i; j += 2) {
            if (j != 2)
                cout << "+";
            cout << j;
            jum += j;
        }
        cout << "=" << jum << endl;
        cout << endl;
    }
    return 0;
}