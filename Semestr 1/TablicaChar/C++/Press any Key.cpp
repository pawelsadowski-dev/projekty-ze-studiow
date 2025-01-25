/*
autor: Pawel Sadowski

Program sprawdza czy wprowadzona przez u¿ytkownika dana jest:
- wielk¹ liter¹
- ma³¹ liter¹
- cyfr¹
- znakiem specjalnym
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char tmp;
    cin >> tmp;

    if(tmp >= 'A' && tmp <= 'Z')
        cout << "wielka litera";
    else if(tmp >= 'a' && tmp <= 'z')
        cout << "mala litera";
    else if(tmp >= '0' && tmp <= '9')
        cout << "cyfra";
    else
        cout << "znak specjalny";

    return 0;
}
