#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

double calculateThirdSide(double a, double b, double angleC) {
    double angleInRadians = angleC * M_PI / 180.0; // Переведення градусів в радіани
    double thirdSide = sqrt(a * a + b * b - 2 * a * b * cos(angleInRadians));
    return thirdSide;
}

int main() {
    double sideA, sideB, angleC;
    cout << "Введіть довжини сторони а та сторони b: ";
    cin >> sideA >> sideB;
    cout << "Введіть кут між ними в градусах: ";
    cin >> angleC;

    double result = calculateThirdSide(sideA, sideB, angleC);
    cout << "Довжина третьої сторони (сторони с) дорівнює: " << result << endl;

    return 0;
}