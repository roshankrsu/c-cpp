#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int note100 = 0, note50 = 0, note20 = 0, note10 = 0;

    switch (1) {
        case 1:
            note100 = amount / 100;
            amount %= 100;

        case 2:
            note50 = amount / 50;
            amount %= 50;

        case 3:
            note20 = amount / 20;
            amount %= 20;

        case 4:
            note10 = amount / 10;
            amount %= 10;

        default:
            break;
    }

    cout << "100 Rupee notes: " << note100 << endl;
    cout << "50 Rupee notes: " << note50 << endl;
    cout << "20 Rupee notes: " << note20 << endl;
    cout << "10 Rupee notes: " << note10 << endl;

    return 0;
}
