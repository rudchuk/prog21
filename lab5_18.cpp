#include <iostream>

using namespace std;

// Функція для додавання двох чисел з одним значенням за промовчанням
int addNumbers(int a, int b = 0) {
    return a + b;
}

int main() {
    // Приклади виклику функції з одним та двома параметрами
    int result1 = addNumbers(5);       // Виклик з одним параметром
    int result2 = addNumbers(3, 7);    // Виклик з двома параметрами

    cout << "Результат 1: " << result1 << endl;
    cout << "Результат 2: " << result2 << endl;

    return 0;
}
