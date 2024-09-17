// Lab_03_1.cpp
// < �������� ���� >
// ����������� ������ No 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 14

#include <iostream>
#include <cmath> //  exp(), atan() �� fabs()
using namespace std;

int main() {
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������

    // �������� x
    cout << "x = ";
    cin >> x;

    A = fabs(4 * x - 1);

    // ����� 1: ������������ � ��������� ����
    if (x < 0) 
        B = x * x * x * x * x * x * x - 2 * x; // x^7 - 2x
    
    if (x >= 0 && x < 3) 
        B = atan((exp(x) + 1) / 8);
    
    if (x >= 3) 
        B = (x * x * x * x) + exp(x * x + 3); // x^4 + e^(x^2 + 3)
    

    y = A + B; // ���������� y
    cout << endl;
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ����
    if (x < 0) 
        B = x * x * x * x * x * x * x - 2 * x; // x^7 - 2x
    
    else if (x >= 3) 
        B = (x * x * x * x) + exp(x * x + 3); // x^4 + e^(x^2 + 3)
    
    else 
        B = atan((exp(x) + 1) / 8);
    

    y = A + B;
    cout << "2) y = " << y << endl;

    return 0;
}
