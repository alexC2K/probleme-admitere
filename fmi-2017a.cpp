// Problema a
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("date.in");
int L;
char s[10000];

int main() {
    f >> L;
    f.get();
    f.get(s, 10000);

    int counting = 0;
    char *p = strtok(s, " ");
    while(p != NULL) {
        counting += strlen(p);
        if(counting <= L) {
            cout << p << " ";
            counting++;
        }
        else {
            cout << "\n";
            counting = 0;
            counting += strlen(p);
            cout << p << " ";
        }
        p = strtok(NULL, " ");
    }
    return 0;
}