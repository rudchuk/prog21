#include <iostream>

using namespace std;

int main() {
    char continueInput;
    int count;
    double number, sum = 0, product = 1;

    // a) Введення кількості чисел
    cout << "Введіть кількість чисел: ";
    cin >> count;

    // b) Введення чисел та обчислення суми та добутку
    for (int i = 1; i <= count; ++i) {
        cout << "Введіть число " << i << ": ";
        cin >> number;

        sum += number;
        product *= number;

        cout << "Продовжити введення чисел? (y/n): ";
        cin >> continueInput;

        if (continueInput != 'y' && continueInput != 'Y') {
            break;  // Припинити введення за запитом
        }
    }

    // Виведення результатів
    cout << "Сума введених чисел: " << sum << endl;
    cout << "Добуток введених чисел: " << product << endl;

    return 0;
}
