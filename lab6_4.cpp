#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // Конструктор за замовчуванням
    Student() : age(0), gender(""), scholarship(0.0) {
        cout << "Викликаний конструктор за замовчуванням" << endl;
    }

    // Конструктор з параметрами
    Student(int studentAge, const string& studentGender, double studentScholarship)
            : age(studentAge), gender(studentGender), scholarship(studentScholarship) {
        cout << "Викликаний конструктор з параметрами" << endl;
    }

    // Конструктор копіювання
    Student(const Student& otherStudent)
            : age(otherStudent.age), gender(otherStudent.gender), scholarship(otherStudent.scholarship) {
        cout << "Викликаний конструктор копіювання" << endl;
    }

    // Деструктор
    ~Student() {
        cout << "Викликаний деструктор" << endl;
    }

    // Метод для виведення даних на екран
    void displayInfo() {
        cout << "Вік: " << age << endl;
        cout << "Стать: " << gender << endl;
        cout << "Стипендія: " << scholarship << endl;
    }

private:
    int age;
    string gender;
    double scholarship;
};

int main() {
    // Створення об'єктів за допомогою різних конструкторів
    Student student1;  // Конструктор за замовчуванням
    Student student2(20, "Чоловіча", 1000.0);  // Конструктор з параметрами
    Student student3 = student2;  // Конструктор копіювання

    // Виведення інформації про студентів
    cout << "\nІнформація про студента 1:" << endl;
    student1.displayInfo();

    cout << "\nІнформація про студента 2:" << endl;
    student2.displayInfo();

    cout << "\nІнформація про студента 3:" << endl;
    student3.displayInfo();

    return 0;
}
