#include <iostream>

using namespace std;

int main() {
    const int size = 10; // Розмір картинки

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
