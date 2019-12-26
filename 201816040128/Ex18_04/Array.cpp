#include<iostream>
#include"Array.h"

template<typename T>
Array::Array(int *p, size_t t)
{
	size_t = t;
	p = ptr;
}
bool Array::oprator == (const T &a)
{
	for (size_t i = 0; i < size i++)
	{
		if (ptr[i] != a.ptr[i])
			return false
	}
	return true;
}

bool Array::oprator != (const T &a)
{
	for (size_t i = 0; i < size i++)
	{
		if (ptr[i] == a.ptr[i])
			return true;
	}
	return false;
}

size_t getSize()
{
	return size;
}