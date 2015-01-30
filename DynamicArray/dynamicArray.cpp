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

DynamicArray::DynamicArray(const DynamicArray& _other)
{
	capacity = _other.capacity;
	arrayInt = new int[capacity];
	for (int i = 0; i < capacity; i++)
	{
		arrayInt[i] = _other.arrayInt[i];
	}
}

int DynamicArray::getCapacite() const
{
	return capacity;
}

int DynamicArray::getElement(int _position) const
{
	if (_position > capacity) throw out_of_range("La position est hors du tableau");
	return arrayInt[_position];
}

void DynamicArray::setElement(int _position, int _valeur)
{
	if (_position > capacity)
	{
		setCapacite(_position + 1);
	}

	arrayInt[_position] = _valeur;
}

void DynamicArray::setCapacite(int _capacity)
{
	if (_capacity < 1) throw invalid_argument("La capacité doit être suppérieur ou égal à 1");

	int *newArrayInt = new int[_capacity];

	for (int i = 0; i < _capacity; i++)
	{
		i < capacity ? newArrayInt[i] = arrayInt[i] : newArrayInt[i] = 0;
	}

	delete arrayInt;
	capacity = _capacity;
	arrayInt = newArrayInt;
}

bool DynamicArray::operator==(DynamicArray& _other)
{
	bool result = true;

	for (int i = 0; i < capacity && result; i++)
	{
		if (arrayInt[i] != _other.arrayInt[i])
		{
			result = false;
		}
	}

	if (capacity != _other.capacity)
	{
		result = false;
	}

	return result;
}

