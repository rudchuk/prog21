#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, D, x1, x2;

    // Введення коефіцієнтів a, b, c
    cout << "Введіть коефіцієнт a: ";
    cin >> a;

    cout << "Введіть коефіцієнт b: ";
    cin >> b;

    cout << "Введіть коефіцієнт c: ";
    cin >> c;

    // Обчислення дискримінанту
    D = b * b - 4 * a * c;

    // Перевірка значення дискримінанту
    if (D > 0) {
        // Різні корені
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Два різних корені: x1 = " << x1 << " і x2 = " << x2 << endl;
    } else if (D == 0) {
        // Один корінь
        x1 = -b / (2 * a);
        cout << "Один корінь: x = " << x1 << endl;
    } else {
        // Комплексні корені
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Комплексні корені: x1 = " << realPart << " + " << imagPart << "i і x2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}