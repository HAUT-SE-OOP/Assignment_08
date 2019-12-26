#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Array
{
	friend ostream& operator<<(ostream& output,const Array& op)
{
	for (size_t i = 0; i < op.size; i++)
	{
		output << setw(12) << op.ptr[i];
		if ((i + 1) % 4 == 0)output<<endl;
	}
	if (op.size % 4 != 0)output << endl;
	return output;
}
	friend istream& operator>>(istream& input, const Array& op)
	{
		for (size_t i = 0; i < op.size; i++)
			input >> op.ptr[i];
		return input;
	}
public:
	Array(int x) :size(x > 0 ? x : 10), ptr(new T[size])
	{
		for (size_t i = 0; i < size; i++)
			ptr[i] = 0;
	}
	Array(Array& op):size(op.size),ptr(new T[size])
	{
		for (size_t i = 0; i < size; i++)
			ptr[i] = op.ptr[i];
	}
	~Array() { delete[]ptr; }
	size_t getsize() { return size; }
	bool operator==(Array& op)
	{
		if (size != op.size)
			return false;
		for (size_t i = 0; i < size; i++)
			if (ptr[i] != op.ptr[i])
				return false;
		return true;
	}
	Array operator=(Array& op)
	{
		if (&op != this)
		{
			if (size != op.size)
			{
				delete[]ptr;
				size = op.size;
				ptr = new T[size];


			}
			for (size_t i = 0; i < size; i++)
				ptr[i] = op.ptr[i];
		}
		return *this;
	}
	T operator[](int x)
	{
		return ptr[x];
	}
private:
	size_t size;
	T * ptr;
};
