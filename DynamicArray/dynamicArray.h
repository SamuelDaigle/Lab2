/************************************************************************/
/* Autor: Samuel Daigle                                                 */
/************************************************************************/
#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <iostream>

using namespace std;

class DynamicArray
{

public:
	DynamicArray();

	int getCapacite() const;
	int getElement(int _position) const;
	
	void setElement(int _position, int _valeur);

private:
	void clear();

private:
	int *arrayInt;
	int capacity;
};


#endif //DYNAMICARRAY_H_