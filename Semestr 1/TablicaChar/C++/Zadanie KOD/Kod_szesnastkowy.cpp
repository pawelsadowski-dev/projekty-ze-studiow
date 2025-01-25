/*autor: Pawel Sadowski*/
/* Program rozwiazujacy zadanie kod ze szkopula
   Konwertuje kod szesnastkowy na kod ASCII i odpowiadajacy znak */

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char p[2];
    int d=0;
    int pow=1;

    for(int i=0; i<2; i++)
    {
        cin >> p[i];
        p[i] = toupper(p[i]);
    }


    for(int i=1; i>=0; i--)
    {
        if(p[i] >= '0'&& p[i] <= '9')
        {
            d += (p[i]-'0') * pow;
        }
        else if(p[i] >= 'A' && p[i] <= 'F')
            d += ((p[i]-'A')+10) * pow;
        else
            continue;
        pow  *= 16;
    }
    cout << d << endl;
    cout << char(d);
    return 0;
}
