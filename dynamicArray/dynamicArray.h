#pragma once

#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_
using namespace std;
#include <iostream>

template <class T>

class DynamicArray
{

public:
	DynamicArray();
	DynamicArray(int _capacite);
	~DynamicArray();
	void setElement(int _index, T _valeur);
	T getElement(int _index);
	int getCapacite();
	void setCapacite(int _capacite);

private:
	DynamicArray(const DynamicArray<T> & _source);
	DynamicArray<T>& operator=(const DynamicArray<T> & _source);

	T * tabElements;
	int capacite;

};
#include "dynamicArray.hpp"

#endif //DYNAMICARRAY_H_