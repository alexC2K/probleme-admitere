// Problema b
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("date.in");
int L, N;
char s[101][101];

bool esteSpatiu(char a) {
    if(a == ' ') return true;
    else return false;
}

int main() {
    f >> L >> N;

    for(int i=1; i<=N; i++) 
        for(int j=0; j<L; j++) 
            f.get(s[i][j]);

    bool ok = false;
    for(int i=1; i<=N; i++) 
        for(int j=0; j<L; j++) 
            if((esteSpatiu(s[i][j]) and esteSpatiu(s[i+1][j])) or (esteSpatiu(s[i][j]) and (esteSpatiu(s[i+1][j-1]) or esteSpatiu(s[i+1][j+1]))))
                ok = true;

    if(ok) cout << "DA";
    else cout << "NU";
    return 0;
}