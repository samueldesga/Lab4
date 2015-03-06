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
	DynamicArray(const DynamicArray<T> & _source);
	DynamicArray<T>& operator=(const DynamicArray<T> & _source);
	bool operator==(const DynamicArray<T> & _rhs) const;
	void operator+=(const DynamicArray<T> & _rhs);
	~DynamicArray();
	void setElement(int _index, T _valeur);
	T getElement(int _index);
	int getCapacite();
	void setCapacite(int _capacite);

private:
	T * tabElements;
	int capacite;

};
#include "dynamicArray.hpp"

#endif //DYNAMICARRAY_H_