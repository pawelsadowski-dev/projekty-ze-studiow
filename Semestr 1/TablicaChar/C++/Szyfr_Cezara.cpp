/*
autor: Pawel Sadowski
Program s³u¿¹cy do szyfrowania i deszyfrowania tzw szyfru cezara

*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    short x,k;
    char tmp[10001];
    cin >> x >> k;
    cin.ignore();
    cin.clear();
    cin.getline(tmp,10001);
    int dlugosc = strlen(tmp);

    if(x == 1)
    {
        for (int i = 0; i < dlugosc; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (tmp[i] >= 'a' && tmp[i] <= 'z')
                {
                    if (tmp[i] == 'z')
                        tmp[i] = 'a';
                    else
                        tmp[i]++;
                }
                else if (tmp[i] >= 'A' && tmp[i] <= 'Z')
                {
                    if (tmp[i] == 'Z')
                        tmp[i] = 'A';
                    else
                        tmp[i]++;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < dlugosc; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (tmp[i] >= 'a' && tmp[i] <= 'z')
                {
                    if (tmp[i] == 'a')
                        tmp[i] = 'z';
                    else
                        tmp[i]--;
                }
                else if (tmp[i] >= 'A' && tmp[i] <= 'Z')
                {
                    if (tmp[i] == 'A')
                        tmp[i] = 'Z';
                    else
                        tmp[i]--;
                }
            }
        }
    }
    for(int i=0; i < dlugosc; i++)
        cout << tmp[i];
    return 0;
}
