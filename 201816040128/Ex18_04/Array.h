#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array {

public:
	Array(int *, size_t);
	bool oprator == (const T &);
	bool oprator != (const T &);
	size_t getSize();
private:
	size_t size;
	int* ptr;
};


#endif