#include <iostream>

using namespace std;

int main() {
    double magnitude;

    cout << "Введіть магнітуду землетрусу за шкалою Ріхтера: ";
    cin >> magnitude;

    if (magnitude < 5.0) {
        cout << "Легке, немає руйнувань" << endl;
    } else if (magnitude >= 5.0 && magnitude < 5.5) {
        cout << "Середнє, невеликі руйнування" << endl;
    } else if (magnitude >= 5.5 && magnitude < 6.5) {
        cout << "Серйозне, руйнування та пошкодження стін" << endl;
    } else if (magnitude >= 6.5 && magnitude < 7.5) {
        cout << "Лихо, багато будинків та будинків пошкоджено" << endl;
    } else {
        cout << "Катастрофа, більшість будинків та будівель зруйновано" << endl;
    }

    return 0;
}
