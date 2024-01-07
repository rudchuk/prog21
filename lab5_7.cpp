#include <iostream>
#include <locale>

using namespace std;

// Функція tolowerR: перетворює символ в малу літеру (російського алфавіту)
char tolowerR(char ch) {
    if (isupper(ch, locale("ru_RU.UTF-8"))) {
        return tolower(ch, locale("ru_RU.UTF-8"));
    }
    return ch;
}

// Функція toupperR: перетворює символ в велику літеру (російського алфавіту)
char toupperR(char ch) {
    if (islower(ch, locale("ru_RU.UTF-8"))) {
        return toupper(ch, locale("ru_RU.UTF-8"));
    }
    return ch;
}

// Функція isalphaR: перевіряє, чи є символ літерою (російського алфавіту)
bool isalphaR(char ch) {
    return isalpha(ch, locale("ru_RU.UTF-8"));
}

// Функція islowerR: перевіряє, чи є символ малою літерою (російського алфавіту)
bool islowerR(char ch) {
    return islower(ch, locale("ru_RU.UTF-8"));
}

// Функція isupperR: перевіряє, чи є символ великою літерою (російського алфавіту)
bool isupperR(char ch) {
    return isupper(ch, locale("ru_RU.UTF-8"));
}

// Функція isalnumR: перевіряє, чи є символ буквою або цифрою (російського алфавіту)
bool isalnumR(char ch) {
    return isalnum(ch, locale("ru_RU.UTF-8"));
}

int main() {
    char ch = 'А';  // Велика літера "А" в російському алфавіті

    // Використання функцій
    cout << "tolowerR('" << ch << "'): " << tolowerR(ch) << endl;
    cout << "toupperR('" << ch << "'): " << toupperR(ch) << endl;
    cout << "isalphaR('" << ch << "'): " << isalphaR(ch) << endl;
    cout << "islowerR('" << ch << "'): " << islowerR(ch) << endl;
    cout << "isupperR('" << ch << "'): " << isupperR(ch) << endl;
    cout << "isalnumR('" << ch << "'): " << isalnumR(ch) << endl;

    return 0;
}
