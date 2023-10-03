/*
* 3. Вычислить значение функции y = f(x) при произвольных x.
           {sin(ln|x|),    при x ≤ -1
     y(x)= {(4x + b)2,   при x -1 < x < 15
           {1/(a2 + x2),   при x ≥ 15
    a = 3,9;
    b = 3
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    const double A = 3.9;
    const int B = 3;
    double x;

    cout << "Введите значение x: ";
    cin >> x;

    // Проверка значений x
    if (x <= -1) {
        cout << sin(log(abs(x))) << endl;
    }
    else if ((x > -1) && (x < 15)) {
        // Если x ∈ (-1; 15) 
        cout << pow((4 * x + B), 2) << endl;
    }
    else {
        // Если x >= 15
        cout << 1 / (pow(A, 2) + pow(x, 2)) << endl;
    }

    return 0;
}