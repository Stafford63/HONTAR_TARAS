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
    cout << "¬ведiть модель машини 1: ";
    cin >> car1;
    cout << "¬ведiть колiр машини 1: ";
    cin >> color1;
    cout << "¬ведiть кiлькiсть кiнських сил дл€ машини 1: ";
    cin >> hpow1;
    car1.setColor(color1);
    car1.setEngineCapacity(100);
    car1.setPower(hpow1);

    Car car2;
    string color2;
    int hpow2;
    cout << "¬ведiть модель машини 2: ";
    cin >> car2;
    cin >> car2;
    cout << "¬ведiть колiр машини 2: ";
    cin >> color2;
    cout << "¬ведiть кiлькiсть кiнських сил дл€ машини 2: ";
    cin >> hpow2;
    car2.setColor(color2);
    car2.setEngineCapacity(100);
    car2.setPower(hpow2);
    
    cars.add(car1);
    cars.add(car2);

    cout << endl << "”сi машини: " << endl;
    cars.showAll();

    cout << endl << "«найденi за модел'ю: " << endl;
    cars.findAndDisplay(car1.getModel());

    cout << endl << "«найден≥ за параметром потужн≥сть: " << endl;
    cars.findAndDisplay(10, 99);
}