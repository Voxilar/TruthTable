#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char ss1[] = { '^', '∨', '¬', 'x', 'y', 'z'};
	char ss[] = { '&&', '||', '!', 'x', 'y', 'z'};
	string st;
	cout << "Введите выражение: ";
	cin >> st;
	string vr;
	for (int i = 0; i < st.length(); i++) {
		for (int j = 0; j < 6; j++) {
			if (ss1[j] == st[i]) {
				if (j == 0 || j == 1) {
					vr += ss[j];
					vr += ss[j];
					vr += ' ';
				}
				else {
					vr += ss[j];
					vr += ' ';
				}
			}
		}
	}
	cout << vr;

	return 0;
}
