#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "input: ";
    getline(cin, input);


    int panjang = input.length() + 2;

    cout << endl;
    cout << char(218);
    for (int i = 0; i < panjang; i++) {
        cout << char(196);
    }
    cout << char(191) << endl;

    cout << char(179) << " " << input << " " << char(179) << endl;

    cout << char(192);
    for (int i = 0; i < panjang; i++) {
        cout << char(196);
    }
    cout << char(217) << endl;

    cin.get();

    return 0;
}