#include <iostream>

using namespace std;

int main() {
    for (int i = 100; i <= 200; i += 2) {
        cout << i << " ";
    }

    int i = 100;

    while (i <= 200) {
        cout << i << " ";
        i += 2;
    }

    i = 100;

    do {
        cout << i << " ";
        i += 2;
    } while (i <= 200);

    return 0;
}
