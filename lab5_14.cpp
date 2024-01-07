#include <iostream>

using namespace std;

// Функція, що перевіряє введені символи
bool checkInput() {
    char input;
    cout << "Введіть 'Y', 'y', 'д' або 'Д': ";
    cin >> input;

    // Перевірка введених символів
    return (input == 'Y' || input == 'y' || input == 'д' || input == 'Д');
}

int main() {
    // Виклик функції та виведення результату
    if (checkInput()) {
        cout << "Введені символи відповідають 'Y', 'y', 'д' або 'Д'." << endl;
    } else {
        cout << "Введені символи не відповідають 'Y', 'y', 'д' або 'Д'." << endl;
    }

    return 0;
}
