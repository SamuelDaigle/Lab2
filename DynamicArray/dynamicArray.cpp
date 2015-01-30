/************************************************************************/
/* Autor: Samuel Daigle                                                 */
/************************************************************************/
#include "dynamicArray.h"

DynamicArray::DynamicArray(int _capacity /* = 100 */)
{
	if (_capacity < 1) throw invalid_argument("La capacité doit être suppérieur ou égal à 1");
	
	capacity = _capacity;

	arrayInt = new int[capacity];

	for (int i = 0; i < capacity; i++)
	{
		arrayInt[i] = 0;
	}
}

int DynamicArray::getCapacite() const
{
	return capacity;
}

int DynamicArray::getElement(int _position) const
{
	return arrayInt[_position];
}

void DynamicArray::setElement(int _position, int _valeur)
{
	if (_position > capacity)
	{
		setCapacite(_position);
	}

	arrayInt[_position] = _valeur;
}

void DynamicArray::setCapacite(int _capacity)
{
	int *newArrayInt = new int[_capacity];

	for (int i = 0; i < _capacity; i++)
	{
		i < capacity ? newArrayInt[i] = arrayInt[i] : newArrayInt[i] = 0;
	}

	delete arrayInt;
	capacity = _capacity;
	arrayInt = newArrayInt;
}

