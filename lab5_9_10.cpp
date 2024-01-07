#include <iostream>

using namespace std;

// Прототип функції Perimeter
unsigned long Perimeter(int length, int width);

int main() {
    int length, width;

    // Введення довжини та ширини
    cout << "Введіть довжину: ";
    cin >> length;

    cout << "Введіть ширину: ";
    cin >> width;

    // Виклик функції Perimeter і виведення результату
    unsigned long result = Perimeter(length, width);
    cout << "Периметр: " << result << endl;

    return 0;
}

// Реалізація функції Perimeter
unsigned long Perimeter(int length, int width) {
    return 2 * (static_cast<unsigned long>(length) + static_cast<unsigned long>(width));
}
