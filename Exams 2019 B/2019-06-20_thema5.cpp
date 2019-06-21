#include <iostream>

using namespace std;

template<class T>
struct Eval {
	T operator() (T x, T y, char c) {
		if (c == '+')
			return x + y;
		else if (c == '-')
			return x - y;
		else
			return x * y;
	}
};

int main() {
	Eval<int> e;

	cout << e(5,5,'*') << endl;
}
