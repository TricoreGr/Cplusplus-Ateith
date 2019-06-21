#include <iostream>

using namespace std;


struct Eval {
	int operator() (int x, int y, char c) {
		if (c == '+')
			return x + y;
		else if (c == '-')
			return x - y;
		else
			return x * y;
	}
};

int main() {
	Eval e;

	cout << e(5,5,'*') << endl;
}