#include <iostream>
#include "Car.h"
#include "Suv.h"
#include "Engineer.h"
using namespace std;
int main() {
	// Sprint 4
	Car* myCar;
	myCar = new Car(100.0, 4, 4500.);
	Engineer* bab;
	bab = new Engineer;
	cout << bab->getCarPrice(myCar) << endl;
	cout << "Speed: " << myCar->speed << endl;
	cout << "Speed Up: " << bab->speedUp(myCar, 30.0) << endl; //private function
	cout << "Speed Down: " << bab->speedDown(myCar, 30.0) << endl; //private function

}