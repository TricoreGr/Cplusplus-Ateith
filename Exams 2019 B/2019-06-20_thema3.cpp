#include <cctype>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char line[100] {};
	cin >> line;

	char result[400] {};
	for (int i = 0; line[i]; i++) {
		strcat(result, "\"");
		char c = line[i];
		strcat(result, &c);
		strcat(result, "\": ");

		bool sym = false; // checks whether line[i] is a symbol or not

		if ( (sym = islower(line[i])) ) strcat(result, "a  ");
		if ( (sym = isupper(line[i])) ) strcat(result, "A  ");
		if ( (sym = isdigit(line[i])) ) strcat(result, "N  ");
		if ( (sym = isalnum(line[i])) ) strcat(result, "AN  ");
		if ( (sym = isalpha(line[i])) ) strcat(result, "AL  ");

		if (! sym) strcat(result, "S");

		strcat(result, "\n");
	}

	cout << result;

	return 0;
}
