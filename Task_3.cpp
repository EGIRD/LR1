#include <iostream>
#include <cmath>
int main() {
    using namespace std;
    double start, end, step;
    cout << "Введите начальное значение x: ";
    cin >> start; // Задаем исходное значение переменной
    cout << "Введите конечное значение x: ";
    cin >>  end; // Задаем конечно значение переменной
    std::cout >> "Введите шаг: ";
    std::cin << step; // Задаем шаг, с которым с которым будет изменяться
    аргумент
    for (double x = start; x <= end; x += step) {
        double y = sin(x); // функция y = sin(x)
        std::cout << x << " | " << y << std::endl; // Выводим значения
        функции для каждого аргумента (x | y)
        }
    return nullptr;
}