#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int age;
    string gender;
    double scholarship;

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

    // Метод для встановлення віку студента
    void setAge(int studentAge) {
        age = studentAge;
    }

    // Метод для отримання віку студента
    int getAge() const {
        return age;
    }

    // Метод для встановлення статі студента
    void setGender(const string& studentGender) {
        gender = studentGender;
    }

    // Метод для отримання статі студента
    string getGender() const {
        return gender;
    }

    // Метод для встановлення стипендії студента
    void setScholarship(double studentScholarship) {
        scholarship = studentScholarship;
    }

    // Метод для отримання стипендії студента
    double getScholarship() const {
        return scholarship;
    }

    // Метод для виведення інформації про студента
    void displayInfo() const {
        cout << "Вік: " << age << endl;
        cout << "Стать: " << gender << endl;
        cout << "Стипендія: " << scholarship << endl;
    }
};

int main() {
    // Створення об'єктів та використання методів доступу до членів-даних
    Student student1;
    student1.setAge(20);
    student1.setGender("Чоловіча");
    student1.setScholarship(1000.0);

    Student student2(22, "Жіноча", 1200.0);

    cout << "\nІнформація про студента 1:" << endl;
    student1.displayInfo();

    cout << "\nІнформація про студента 2:" << endl;
    student2.displayInfo();

    return 0;
}
