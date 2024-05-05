#include <iostream>

using namespace std;

int main() {
    int a, i, j, jum;
    cout << "Input: ";
    cin >> a;
    for (i = a; i >= 2; i -= 2) {
        cout << endl;
        jum = 0;
        for (j = i; j >= 2; j -= 2) {
            cout << " " << j << " ";
            jum += j;
        }
        cout << "=" << jum << endl;
    }
    return 0;
}