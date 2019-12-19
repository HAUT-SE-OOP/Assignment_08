#include <iostream>

using namespace std;

#ifndef ARR_H
#define ARR_H

template <class T, int maxn>
class Array {
public:
	Array() { 
		a = new T[maxn];
		l = 0;
	}

	//Overload insert operator
	void push_back(const T &x) {
		if (l == maxn) {
			throw(out_of_range("Array is full\n"));
			return;
		}
		a[l++] = x;
	}

	//Overload pop-up operator
	void pop_back() {
		if (l == 0) {
			throw(out_of_range("Array is empty\n"));
			return;
		}
		--l;
	}

	//Overloaded bracket operator
	T& operator [] (int p) {
		if (p < 0 || p >= l) {
			throw(out_of_range("Subscript range does not meet the requirements\n"));
			return 0;
		}
		return a[p];
	}

	//Overload size operator
	int size() const {
		return l;
	}

	//Overloaded equality operator
	bool operator == (const Array &b) {
		if (l != b.l) return 0;
		for (int i = 0; i < l; ++i) {
			if (a[i] != b.a[i]) return 0;
		}
		return 1;
	}

	//Overloaded assignment operator
	Array& operator = (const Array &b) {
		l = b.l;
		for (int i = 0; i < l; ++i) {
			a[i] = b.a[i];
		}
		return *this;
	}
private:
	T *a;
	int l;
};

#endif // !ARR_H
