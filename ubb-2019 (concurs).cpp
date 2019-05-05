// model de calcul pentru functia radical (I - 2) - http://modinfo.ro/admitere/iasi/2014/subiect.pdf
// model de calcul pentru functia radical (III) - http://modinfo.ro/admitere/iasi/2017/subiect.pdf
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int coliviiDeschise(int n) {
	int nrDeschise = 0; // initial nu sunt deschise
	int v[n];

	// prima parcurgere, toate sunt deschise
	for (int i = 1; i <= n; i++) v[i] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) { // (2, 4, 6..) sau (3, 6, 9..) etc.
			if (v[j] == 1) v[j] = 0; // cele deschise vor fi inchise
			else v[j] = 1; // cele inchise vor fi deschise
		}
	}

	for (int i = 1; i <= n; i++)
		if (v[i] == 1) nrDeschise++; // le numaram pe cele deschise

	return nrDeschise;
}

int coliviiDeschise2(int n) {
	int copie = n;

	while ((copie - n / copie) > 0.001) // calculam cu o aproximare de 0.001
		copie = (copie + n / copie) / 2;

	return copie;
}

int coliviiDeschise3(int n) {
	int i = 1, nrDeschise = 0;

	while (i* i <= n) {
		nrDeschise++;
		i++;
	}

	return nrDeschise;
}

int main() {
	int n;
	f >> n;

	//cout << coliviiDeschise(n);
}