#include <iostream>

using namespace std;

// Перевантажена функція для порівняння двох цілих чисел
bool isEqual(int a, int b) {
    return a == b;
}

// Перевантажена функція для порівняння двох дійсних чисел
bool isEqual(double a, double b) {
    return a == b;
}

// Перевантажена функція для порівняння двох символів
bool isEqual(char a, char b) {
    return a == b;
}

int main() {
    // Приклад викликів функцій з різними типами
    cout << "Цілі числа: " << isEqual(5, 5) << endl;
    cout << "Дійсні числа: " << isEqual(3.14, 3.14) << endl;
    cout << "Символи: " << isEqual('a', 'a') << endl;

    return 0;
}
