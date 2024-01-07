#include <iostream>

using namespace std;

// Void-функція, що подвоює число
void doubleNumber(int num) {
    num *= 2;
    cout << "У функції: Подвоєне число: " << num << endl;
}

int main() {
    int number;

    cout << "Введіть число: ";
    cin >> number;

    // Виклик void-функції та виведення результату
    doubleNumber(number);

    // Виведення значення number після виклику функції
    cout << "Поза функцією: Оригінальне число: " << number << endl;

    return 0;
}
