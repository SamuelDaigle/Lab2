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
	DynamicArray(int _capacity = 100);
	DynamicArray(const DynamicArray& _other);
	~DynamicArray();

	int getCapacite() const;
	int getElement(int _position) const;
	
	void setElement(int _position, int _valeur);
	void setCapacite(const int _capacity);

	bool operator==(DynamicArray& _other) const;
	const DynamicArray& operator=(DynamicArray& _other);
	const DynamicArray& operator+=(DynamicArray& _other);

private:
	int *arrayInt;
	int capacity;
};


#endif //DYNAMICARRAY_H_