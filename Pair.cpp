// Pair.cpp
#include "Pair.h"

// Конструктор
Pair::Pair(double first, double second) {
    Init(first, second);
}

// Метод инициализации
void Pair::Init(double first, double second) {
    this->first = first;
    this->second = second;
}

// Метод ввода с клавиатуры
void Pair::Read() {
    std::cout << "Введите первое значение: ";
    std::cin >> first;
    std::cout << "Введите второе значение: ";
    std::cin >> second;
    Init(first, second);
}

// Метод вывода на экран
void Pair::Show() const {
    std::cout << "Pair: (" << first << ", " << second << ")" << std::endl;
}

// Внешняя функция для создания объекта Pair
Pair make_pair(double first, double second) {
    return Pair(first, second);
}

