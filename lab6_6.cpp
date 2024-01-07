#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int age;
    string gender;
    double scholarship;

public:

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
    Student student;

    // Використання методів доступу до полів
    student.setAge(25);
    student.setGender("Чоловіча");
    student.setScholarship(1500.0);

    cout << "Інформація про студента:" << endl;
    cout << "Вік: " << student.getAge() << endl;
    cout << "Стать: " << student.getGender() << endl;
    cout << "Стипендія: " << student.getScholarship() << endl;

    return 0;
}
