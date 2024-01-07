#include <iostream>

using namespace std;

int main() {
    double power;

    cout << "Введіть потужність лампочки в Вт: ";
    cin >> power;

    // Визначення терміну служби згідно таблиці рішень
    if (power == 25) {
        cout << "Термін служби: 2500 годин" << endl;
    } else if (power == 40 || power == 60) {
        cout << "Термін служби: 1000 годин" << endl;
    } else if (power == 75 || power == 100) {
        cout << "Термін служби: 750 годин" << endl;
    } else if (power == 150 || power == 200) {
        cout << "Термін служби: 500 годин" << endl;
    } else {
        cout << "Непідтримувана потужність лампочки" << endl;
    }

    return 0;
}
