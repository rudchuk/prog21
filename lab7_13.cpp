#include <iostream>

using namespace std;

int main() {
    int value = 2;

    switch (value) {
        case 2:
            cout << "White\n";
            break;
        default:
            cout << "Other\n";
            break;
    }

    return 0;
}
