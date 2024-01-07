#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Ініціалізація генератора випадкових чисел
    srand(static_cast<unsigned int>(time(nullptr)));

    // Генеруємо три випадкових числа
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int num3 = rand() % 100;

    // Виводимо випадкові числа
    cout << "Перше випадкове число: " << num1 << endl;
    cout << "Друге випадкове число: " << num2 << endl;
    cout << "Третє випадкове число: " << num3 << endl;

    // Визначаємо максимальне число
    int maxNumber = num1;

    if (num2 > maxNumber) {
        maxNumber = num2;
    }

    if (num3 > maxNumber) {
        maxNumber = num3;
    }

    // Виводимо максимальне число
    cout << "Найбільше число: " << maxNumber << endl;

    return 0;
}
