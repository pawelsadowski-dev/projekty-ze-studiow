/*
    autor: Pawel Sadowski
    Program s³u¿y do wyszukania najd³u¿szego wspólnego pods³owa dwóch wyrazów
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char slowo1[101];
    char slowo2[101];
    int pod = 0;
    int max_s = 0;


    cin.getline(slowo1, 101);
    cin.getline(slowo2, 101);

    int n_1 = strlen(slowo1);
    int n_2 = strlen(slowo2);

    for (int i = 0; i < n_1; i++)
    {
        for (int j = 0; j < n_2; j++)
        {
            pod = 0;
            while ((pod + i < n_1) && (pod + j < n_2) && (slowo1[i + pod] == slowo2[j + pod]))
            {
                pod++;
                if (pod > max_s)
                    max_s = pod;
            }
        }
    }

    cout << max_s;

    return 0;
}
