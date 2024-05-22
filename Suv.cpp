#include "Suv.h"
#include <iostream>
using namespace std;
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
void SUV::setMan(int i)
{
	man = i;
}
int SUV::getSparewheels() {
	return spareWheels;
};
int SUV::getMan()
{
	return man;
}
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		cout << "Beep\n";
	}
}