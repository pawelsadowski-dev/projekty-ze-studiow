#include <iostream>
#include <cstring>
#include <cctype>

/*
autor: Pawel Sadowski
Program sprawdza czy s³owo jest palindromem.
*/

using namespace std;

int main()
{
    char wyraz[1000001], wyraz_1[1000001];
    cin.getline(wyraz, 1000001);

    int k = 0;
    for (int i = 0; wyraz[i] != '\0'; i++) {
        if (isalnum(wyraz[i])) {
            wyraz_1[k++] = tolower(wyraz[i]);
        }
    }
    wyraz_1[k] = '\0';

    int i = 0, j = k - 1;
    while (i < j) {
        if (wyraz_1[i] != wyraz_1[j]) {
            cout << "NIE" << endl;
            return 0;
        }
        i++;
        j--;
    }

    cout << "TAK" << endl;
    return 0;
}
