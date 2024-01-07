#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // Відкриті члени-дані класу
    int age;
    string gender;
    double scholarship;

    // Конструктор класу
    Student(int studentAge, const string& studentGender, double studentScholarship)
            : age(studentAge), gender(studentGender), scholarship(studentScholarship) {
    }

    // Функція для виведення інформації про студента
    void displayInfo() {
        cout << "Вік: " << age << endl;
        cout << "Стать: " << gender << endl;
        cout << "Стипендія: " << scholarship << endl;
    }
};

int main() {
    // Створення об'єкта класу та ініціалізація даними
    Student student1(20, "Чоловіча", 1000.0);

    // Виведення інформації про студента
    cout << "Інформація про студента 1:" << endl;
    student1.displayInfo();

    return 0;
}
