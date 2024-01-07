#include <iostream>

using namespace std;

// Inline-функція, яка повертає числове значення символу
inline int charToNumber(char ch) {
    return static_cast<int>(ch);
}

int main() {
    char inputChar;
    cout << "Введіть символ: ";
    cin >> inputChar;

    // Виклик inline-функції та виведення результату
    int result = charToNumber(inputChar);
    cout << "Числове значення символу '" << inputChar << "': " << result << endl;

    return 0;
}
