#include <iostream>
#include "CarCollection.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "uk-UA");

    

    CarCollection cars;

    Car car1;
    string color1;
    int hpow1;
    cout << "����i�� ������ ������ 1: ";
    cin >> car1;
    cout << "����i�� ���i� ������ 1: ";
    cin >> color1;
    cout << "����i�� �i���i��� �i������ ��� ��� ������ 1: ";
    cin >> hpow1;
    car1.setColor(color1);
    car1.setEngineCapacity(100);
    car1.setPower(hpow1);

    Car car2;
    string color2;
    int hpow2;
    cout << "����i�� ������ ������ 2: ";
    cin >> car2;
    cin >> car2;
    cout << "����i�� ���i� ������ 2: ";
    cin >> color2;
    cout << "����i�� �i���i��� �i������ ��� ��� ������ 2: ";
    cin >> hpow2;
    car2.setColor(color2);
    car2.setEngineCapacity(100);
    car2.setPower(hpow2);
    
    cars.add(car1);
    cars.add(car2);

    cout << endl << "��i ������: " << endl;
    cars.showAll();

    cout << endl << "�������i �� �����'�: " << endl;
    cars.findAndDisplay(car1.getModel());

    cout << endl << "������� �� ���������� ���������: " << endl;
    cars.findAndDisplay(10, 99);
}