/************************************************************************/
/* Autor: Samuel Daigle                                                 */
/************************************************************************/
#include "dynamicArray.h"

DynamicArray::DynamicArray()
{
	capacity = 100;
	arrayInt = new int[capacity];
	clear();
}

void DynamicArray::clear()
{
	if (arrayInt == nullptr) throw runtime_error("Le tableau n'existe pas");

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
	arrayInt[_position] = _valeur;
}
