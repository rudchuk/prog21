#include <iostream>

using namespace std;

// Функція, що виконує ділення двох цілих чисел та повертає результат або -1 при діленні на 0
int divide(int numerator, int denominator) {
    if (denominator == 0) {
        cout << "Помилка: ділення на 0." << endl;
        return -1;
    }

    return numerator / denominator;
}

int main() {
    // Приклад виклику функції
    int num1, num2;

    cout << "Введіть чисельник: ";
    cin >> num1;

    cout << "Введіть знаменник: ";
    cin >> num2;

    int result = divide(num1, num2);

    if (result != -1) {
        cout << "Результат ділення: " << result << endl;
    }

    return 0;
}
