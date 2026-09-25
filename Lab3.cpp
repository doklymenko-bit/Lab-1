#include <iostream>

using namespace std;

int main()
{
    // Оголошення змінних
    float a, b, c;
    float V, S;

    // Введення довжин ребер прямокутного паралелепіпеда
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    // Обчислення об'єму
    V = a * b * c;

    // Обчислення площі повної поверхні
    S = 2 * (a * b + b * c + a * c);

    // Виведення результатів
    cout << "V = " << V << endl;
    cout << "S = " << S << endl;

    // Завершення роботи програми
    return 0;
}
