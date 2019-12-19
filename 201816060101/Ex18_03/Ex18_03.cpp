#include <iostream>

using namespace std;

class poi {
public:
	int val;

	//Constructor
	poi() {}
	poi(int val) :val(val) {}

	//Overloaded equal
	bool operator == (const poi &b) const {
		return val == b.val;
	}
};

//Overload output function
ostream& operator << (ostream & out, poi &a) {
	out << a.val;
	return out;
}

//Overload input function
istream& operator >> (istream & in, poi &a) {
	in >> a.val;
	return in;
}

//Define template functions
template <typename T>
bool isEqualTo(const T &a, const T &b) {
	return a == b;
}

int main() {
	int ai = 3, bi = 9;
	//Outputs 3 and 3.9
	cout << "a=" << ai << ", b=" << bi << "\n";
	cout << "a" << (isEqualTo(ai, bi) ? "=" : "!=") << "b\n\n";
	ai = bi;
	cout << "a=" << ai << ", b=" << bi << "\n";
	cout << "a" << (isEqualTo(ai, bi) ? "=" : "!=") << "b\n\n";

	double ad = 3.8, bd = 8.3;
	//Outputs 3.8 and 8.3
	cout << "a=" << ad << ", b=" << bd << "\n";
	cout << "ad" << (isEqualTo(ad, bd) ? "=" : "!=") << "bd\n\n";
	ad = bd;
	cout << "a=" << ad << ", b=" << bd << "\n";
	cout << "ad" << (isEqualTo(ad, bd) ? "=" : "!=") << "bd\n\n";

	char ac = 'a', bc = 'v';
	//Outputs 'a' and 'v'
	cout << "a=" << ac << ", b=" << bc << "\n";
	cout << "ad" << (isEqualTo(ac, bc) ? "=" : "!=") << "bd\n\n";
	ac = bc;
	cout << "a=" << ac << ", b=" << bc << "\n";
	cout << "ad" << (isEqualTo(ac, bc) ? "=" : "!=") << "bd\n\n";

	poi ap(36), bp(75);
	//Outputs 36 and 75
	cout << "a=" << ap << ", b=" << bp << "\n";
	cout << "a" << (isEqualTo(ap, bp) ? "=" : "!=") << "b\n\n";
	ap = bp;
	cout << "a=" << ap << ", b=" << bp << "\n";
	cout << "a" << (isEqualTo(ap, bp) ? "=" : "!=") << "b\n\n";
	return 0;
}
