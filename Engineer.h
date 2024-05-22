#pragma once
#include "Car.h"
class Engineer {
public:
	int getCarPrice(Car*);
	float speedUp(Car*,float); //new function
	float speedDown(Car*,float); //new function
};