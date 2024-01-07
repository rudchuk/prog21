#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // Введення рядка з клавіатури
    cout << "Введіть рядок: ";
    char buffer[100];
    cin.getline(buffer, sizeof(buffer));

    // Перетворення рядка на ціле число
    int intValue = atoi(buffer);

    // Перетворення рядка на довге число
    long longValue = atol(buffer);

    // Перетворення рядка на речове число
    float floatValue = atof(buffer);

    // Виведення результатів
    cout << "Ціле число: " << intValue << endl;
    cout << "Довге число: " << longValue << endl;
    cout << "Речове число: " << floatValue << endl;

    return 0;
}
