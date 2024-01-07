#include <iostream>
#include <string>

using namespace std;

class Student {
public:
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
    // Створення двох об'єктів типу "Студент" та ініціалізація даними
    Student student1(20, "Чоловіча", 1000.0);
    Student student2(22, "Жіноча", 1200.0);

    // Виведення інформації про об'єкти
    cout << "Інформація про студента 1:" << endl;
    student1.displayInfo();
    cout << endl;

    cout << "Інформація про студента 2:" << endl;
    student2.displayInfo();

    return 0;
}
