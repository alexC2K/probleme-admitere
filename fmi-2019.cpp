#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// fmi 2019 problema a
	int n;
	int a[101];

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int maxim = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int distanta = j - i;
			int minim = min(a[i], a[j]);

			int kilometri = distanta * minim;
			if (kilometri > maxim) maxim = kilometri;
		}
	}

	cout << maxim;
	
	// fmi 2019 problema b
	int m;
	int c[101];

	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> c[i];
	}
	sort(c, c + m, cmp); // crescator

	int maxim = 0;
	for (int i = 1; i <= m; i++) {
		if (c[i] > 1) {
			int number = 1;
			for (int j = i + 1; j <= m; j++) {
				if (c[j] >= c[i]) 
					number++;
			}
			if (c[i] <= number) {
				if (number > maxim) maxim = number;
			}
		}
	}
	cout << maxim;
}