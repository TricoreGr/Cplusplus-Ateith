#include <iostream>

using namespace std;

class Rect {
public:
	float x;
	float y;
};

class Perioxi {
private:
	Rect *p;
	int n;

public:
	// a
	Perioxi() { n = 1; }
	
	Perioxi(int nn) {
		n = nn;
		
		p = new Rect[nn];

		for (int i = 0; i < nn; i++) {
			p[i].x = 0;
			p[i].y = 0;
		}
	}

	// e
	float emv(int i) { return (i > n) ? -1 : p[i].x * p[i].y; }

	// f
	int add_rect(const Rect& r) {
		for (int i = 0; i < n; i++)
			if (p[i].x == 0 && p[i].y == 0) {
				p[i].x = r.x;
				p[i].y = r.y;
				return 0;
			}
		
		return 1;
	}

	// c
};

int main() {
	Perioxi p { 3 };

	p.add_rect({1, 2});
	p.add_rect({3, 4});
	p.add_rect({5, 6});

	for (int i = 0; i < 3; i++)
		printf("Rect #%d: emv = %.3f\n", i+1, p.emv(i));
	
	return 0;
}
