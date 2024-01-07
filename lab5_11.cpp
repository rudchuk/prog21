#include <iostream>

using namespace std;

// Виправлено <iostream.h> на <iostream>
// Додано int перед main(), а також повернення значення з main()
// Додано змінній x значення при виклику myFunc(int)
// Виправлено помилку в оголошенні та визначенні myFunc, оскільки вона повертає int, а не void
int myFunc(int x);

int main() {
    int x, y;
    x = 5;  // призначте значення x
    y = myFunc(x);
    cout << "Результат myFunc: " << y << endl;
    return 0;
}

int myFunc(int a) {
    return 4 * a;
}