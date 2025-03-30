// main.cpp
#include <iostream>
#include "Pair.h"

int main() {
    setlocale(LC_ALL, "ru");
    // �������� �������� ������� ���������
    Pair pair1(1, 2);
    pair1.Show();

    Pair pair2 = make_pair(3, 4);
    pair2.Show();

    // ���� � ����������
    Pair pair3;
    pair3.Read();
    pair3.Show();

    // �������� ������� ��������
    const int size = 5;
    Pair pairs[size];
    for (int i = 0; i < size; ++i) {
        pairs[i] = Pair(i, i + 1);
        pairs[i].Show();
    }

    return 0;
}

