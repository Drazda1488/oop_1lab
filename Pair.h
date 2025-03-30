#pragma once
#include <iostream>


class Pair {
private:
    double first;
    double second;

public:
    // �����������
    Pair(double first = 0, double second = 0);

    // ����� �������������
    void Init(double first, double second);

    // ����� ����� � ����������
    void Read();

    // ����� ������ �� �����
    void Show() const;

    // ������������� ������� ��� �������� ������� Pair
    friend Pair make_pair(double first, double second);
};

// ������� ������� ��� �������� ������� Pair
Pair make_pair(double first, double second);



