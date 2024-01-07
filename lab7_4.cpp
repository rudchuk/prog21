#include <iostream>

using namespace std;

int main() {
    const int lowerBound = 1;  // Нижня межа діапазону
    const int upperBound = 100;  // Верхня межа діапазону

    int userInput;

    do {
        cout << "Введіть число від " << lowerBound << " до " << upperBound << ": ";
        cin >> userInput;

        if (userInput < lowerBound || userInput > upperBound) {
            cout << "Число не входить в діапазон. Повторіть введення." << endl;
        }

    } while (userInput < lowerBound || userInput > upperBound);

    cout << "Ви ввели допустиме число: " << userInput << endl;

    return 0;
}
