#include <iostream>

using namespace std;

enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    int day1 = 3; // Приклад цілочисельного параметра

    switch (day1) {
        case 1:
            cout << "Понеділок";
            break;
        case 2:
            cout << "Вівторок";
            break;
        case 3:
            cout << "Середа";
            break;
            // ... додаткові варіанти ...
        default:
            cout << "Неправильний номер дня";
    }

    char day2 = 'T'; // Приклад символьного параметра

    switch (day2) {
        case 'M':
            cout << "Понеділок";
            break;
        case 'T':
            cout << "Вівторок або Четвер";
            break;
        case 'W':
            cout << "Середа";
            break;
            // ... додаткові варіанти ...
        default:
            cout << "Неправильний символ для дня тижня";
    }

    Weekday day3 = MONDAY; // Приклад параметра типу перерахування

    switch (day3) {
        case MONDAY:
            cout << "Понеділок";
            break;
        case TUESDAY:
            cout << "Вівторок";
            break;
        case WEDNESDAY:
            cout << "Середа";
            break;
            // ... додаткові варіанти ...
        default:
            cout << "Неправильний день тижня";
    }

    return 0;
}
