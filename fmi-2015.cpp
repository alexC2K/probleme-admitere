#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, n, v[101];

	cin >> a >> b >> c >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i];

	// subpunctul a
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (a * v[i] * v[i] + b * v[j] * v[j] == c)
				cout << "(" << v[i] << ", " << v[j] << ")\n";

	// subpunctul b
	int totals = 0;
	int i = 1, j = n;
	while(i < j) {
		int calcul = a * v[i] * v[i] + b * v[j] * v[j];

		if (calcul == c) {
			totals += 2;
			i++, j--;
		}
		else if (calcul > c) j--;
		else i++;
	}

	cout << totals;

	return 0;
}