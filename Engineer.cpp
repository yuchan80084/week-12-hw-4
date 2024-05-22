#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) 
{
	return xx->price; // access protected or private
}
float Engineer::speedUp(Car* yy,float y)
{
	yy->speedUp(y);
	return yy->speed;
}
float Engineer::speedDown(Car* zz,float z)
{
	zz->speedDown(z);
	return zz->speed;
}