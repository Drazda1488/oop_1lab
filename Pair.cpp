// Pair.cpp
#include "Pair.h"

// �����������
Pair::Pair(double first, double second) {
    Init(first, second);
}

// ����� �������������
void Pair::Init(double first, double second) {
    this->first = first;
    this->second = second;
}

// ����� ����� � ����������
void Pair::Read() {
    std::cout << "������� ������ ��������: ";
    std::cin >> first;
    std::cout << "������� ������ ��������: ";
    std::cin >> second;
    Init(first, second);
}

// ����� ������ �� �����
void Pair::Show() const {
    std::cout << "Pair: (" << first << ", " << second << ")" << std::endl;
}

// ������� ������� ��� �������� ������� Pair
Pair make_pair(double first, double second) {
    return Pair(first, second);
}

