#include <iostream>
#include <cmath>

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    cout << "Введіть координати точки 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введіть координати точки 2 (x2 y2): ";
    cin >> x2 >> y2;

    double distance = calculateDistance(x1, y1, x2, y2);
    cout << "Відстань між двома точками дорівнює: " << distance << endl;

    return 0;
}