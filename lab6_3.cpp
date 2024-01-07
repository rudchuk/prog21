#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int age;
    string gender;
    double scholarship;

    // Конструктор класу
    Student(int studentAge = 0, const string& studentGender = "", double studentScholarship = 0.0)
            : age(studentAge), gender(studentGender), scholarship(studentScholarship) {
    }

    // Метод для введення даних з клавіатури
    void inputData() {
        cout << "Введіть вік студента: ";
        cin >> age;

        cout << "Введіть стать студента: ";
        cin.ignore();  // Очистка буфера перед зчитуванням рядка
        getline(cin, gender);

        cout << "Введіть стипендію студента: ";
        cin >> scholarship;
    }

    // Метод для виведення даних на екран
    void displayInfo() {
        cout << "Вік: " << age << endl;
        cout << "Стать: " << gender << endl;
        cout << "Стипендія: " << scholarship << endl;
    }
};

int main() {
    // Створення та ініціалізація об'єкта
    Student student;

    // Виклик методу для введення даних
    student.inputData();

    // Виведення інформації про студента
    cout << "\nІнформація про студента:" << endl;
    student.displayInfo();

    return 0;
}
