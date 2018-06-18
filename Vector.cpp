#include "stdafx.h"
#include "Vector.h"

template<typename T>
Vector::Vector(T type)
{
	T* ptr;
	ptr = new T[1];
}

template<typename T>
Vector::Vector(T type, int size)
{
	T* ptr;
	ptr = new T[size];
}

template<typename T>
Vector::Vector(T type, int size, T value)
{
	T* ptr;
	ptr = new T[size];
	for (int j = 0; j < size; j++)
	{
		ptr[j] = value;
	}
}

template <typename T>
void push_back(T element, T* ptr, int size)
{
	sizeIncrease(size, ptr);
	vect[size + 1] = element;
}

template <typename T>
void pop_back(int size, T* ptr)
{
	ptr[size] = "";
}

int size(Vector test)
{
	for (int j = 0; j > -1; j++)
	{
		if (/*The way I constructed my Vectors was I initialized a pointer to to point to an array that I can store the selected data types in. The problem here is that I dont know how to get this if to access that pointer so I can go through it and check everything. That's also why most of my functions take 'T* ptr' instead of a Vector-class object*/)
		{
			return j;
			break;
		}
	}
}

template <typename T>
T at(int index, T* ptr)
{
	return ptr[index];
}

template <typename T>
bool empty(T* ptr)
{
	if (ptr[0] == "")
	{
		return 1;
	}
	else
		return 0;
}

template <typename T>
void clear(T* ptr, int size)
{
	for (int j = 0; j < size; j++)
	{
		ptr[j] = "";
	}
}

void swap(Vector v2)
{
	//I have no idea how to solve this one
}

template <typename T>
void sizeIncrease(int size, T* ptr)
{
	ptr = new T[size + 1];
}

Vector::~Vector()
{
}
