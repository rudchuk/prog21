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
    Student() : age(0), gender(""), scholarship(0.0) {}

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
};

int main() {
    // Створення та ініціалізація об'єктів
    Student student1;
    student1.setAge(20);
    student1.setGender("Чоловіча");
    student1.setScholarship(1000.0);

    Student student2;
    student2.setAge(22);
    student2.setGender("Жіноча");
    student2.setScholarship(1200.0);

    // Виведення інформації про студентів
    cout << "Інформація про студента 1:" << endl;
    cout << "Вік: " << student1.getAge() << endl;
    cout << "Стать: " << student1.getGender() << endl;
    cout << "Стипендія: " << student1.getScholarship() << endl;

    cout << "\nІнформація про студента 2:" << endl;
    cout << "Вік: " << student2.getAge() << endl;
    cout << "Стать: " << student2.getGender() << endl;
    cout << "Стипендія: " << student2.getScholarship() << endl;

    // Розрахунок та виведення середнього віку та сумарної стипендії
    int totalAge = student1.getAge() + student2.getAge();
    double averageAge = static_cast<double>(totalAge) / 2;

    double totalScholarship = student1.getScholarship() + student2.getScholarship();

    cout << "\nСередній вік: " << averageAge << endl;
    cout << "Сумарна стипендія: " << totalScholarship << endl;

    return 0;
}
