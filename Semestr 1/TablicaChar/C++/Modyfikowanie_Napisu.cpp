/* Autor: Pawel Sadowski */
/* Program rozwiazujacy modyfikowanie napisu.
   Program pozwala na wykonywanie nastêpuj¹cych operacji na ci¹gu znaków:
   1. Z - Zamiana wybranego znaku na inny.
   2. D - Doklejenie nowego znaku na koñcu napisu.
   3. U - Usuniêcie okreœlonej liczby znaków z koñca napisu.
   4. N - Zakoñczenie modyfikacji i wypisanie wyniku. */

#include <iostream>s
#include <cstring>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[200];
    cin.getline(s, 200);

    int dlugosc = strlen(s);

    bool cz = true;
    while (cz)
    {
        char polecenie;
        cin >> polecenie;

        switch (polecenie)
        {
            case 'Z':
            {
                char x, y;
                cin >> x >> y;
                for(int i = 0; i < dlugosc; i++)
                {
                    if(s[i] == x)
                        s[i] = y;
                }
                break;
            }
            case 'D':
            {
                char x;
                cin >> x;
                if (dlugosc < 199)
                {
                    s[dlugosc] = x;
                    dlugosc++;
                    s[dlugosc] = '\0';
                }
                break;
            }
            case 'U':
            {
                int p;
                cin >> p;
                dlugosc -= p;
                if (dlugosc < 0) dlugosc = 0;
                s[dlugosc] = '\0';
                break;
            }
            case 'N':
                cz = false;
                break;
            default:
                break;
        }
    }

    cout << s << endl;
    return 0;
}
