#include <iostream>
#include <string>

using namespace std;

int main() {
    // Оголошення та ініціалізація рядків для елементів адреси
    string city = "";
    string district = "";
    string street = "";
    string house = "";
    string apartment = "";

    // Введення значень елементів адреси
    cout << "Введіть місто: ";
    getline(cin, city);

    cout << "Введіть район: ";
    getline(cin, district);

    cout << "Введіть вулицю: ";
    getline(cin, street);

    cout << "Введіть будинок: ";
    getline(cin, house);

    cout << "Введіть квартиру: ";
    getline(cin, apartment);

    // Сформувати значення всієї адреси, виконавши конкатенацію рядків
    string fullAddress = city + ", " + district + ", " + street + ", " + house + ", " + apartment;

    // Вивести значення елементів адреси та всієї адреси
    cout << "Місто: " << city << ", Довжина: " << city.length() << endl;
    cout << "Район: " << district << ", Довжина: " << district.length() << endl;
    cout << "Вулиця: " << street << ", Довжина: " << street.length() << endl;
    cout << "Будинок: " << house << ", Довжина: " << house.length() << endl;
    cout << "Квартира: " << apartment << ", Довжина: " << apartment.length() << endl;

    cout << "Всієї адреси: " << fullAddress << ", Довжина: " << fullAddress.length() << endl;

    // Порівняння міста та району
    int comparisonResult = city.compare(district);
    if (comparisonResult > 0) {
        cout << "Місто більше за район." << endl;
    } else if (comparisonResult < 0) {
        cout << "Район більший за місто." << endl;
    } else {
        cout << "Місто і район рівні за довжиною." << endl;
    }

    return 0;
}
