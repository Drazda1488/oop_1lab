#pragma once
#include <iostream>


class Pair {
private:
    double first;
    double second;

public:
    // Конструктор
    Pair(double first = 0, double second = 0);

    // Метод инициализации
    void Init(double first, double second);

    // Метод ввода с клавиатуры
    void Read();

    // Метод вывода на экран
    void Show() const;

    // Дружественная функция для создания объекта Pair
    friend Pair make_pair(double first, double second);
};

// Внешняя функция для создания объекта Pair
Pair make_pair(double first, double second);



