#include <iostream>

using namespace std;

int main()
{
    // Оголошення константи та змінних
    const float PI = 3.14;
    float alpha, deg;

    // Введення кута в радіанах
    cout << "alpha = ";
    cin >> alpha;

    // Переведення радіанів у градуси
    deg = alpha * 180 / PI;

    // Виведення результату
    cout << "deg = " << deg << endl;

    // Пауза перед завершенням програми
    cout << "...";
    cin.get();
    cin.get();

    return 0;
}
