#include <iostream>

using namespace std;

int main()
{
    // Оголошення змінних
    double A, B, C, temp;

    // Введення даних
    cout << "A = ";
    cin >> A;

    cout << "B = ";
    cin >> B;

    cout << "C = ";
    cin >> C;

    // Переміщення значень: A -> B, B -> C, C -> A
    temp = A;
    A = C;
    C = B;
    B = temp;

    // Виведення результату
    cout << "Нові значення:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;

    // Пауза перед завершенням програми
    cout << "Натисніть Enter для завершення...";
    cin.ignore();
    cin.get();

    return 0;
}
