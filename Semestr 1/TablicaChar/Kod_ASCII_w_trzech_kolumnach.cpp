/*autor: Pawel Sadowski*/
/* Program wypisuje wartrosc ASCII dla liczb calkowitych z zadanego zakresu w trzech kolumnach*/
#include <iostream>
using namespace std;

int main()
{
    int n_p,n_k,j=1;

    cin >> n_p >> n_k;

    for(int i=n_p; i <= n_k; i++)
    {
        cout << i << " - " << char(i);
        cout << '\t';
        if(j % 3 == 0)
            cout << endl;
        j++;
    }
    return 0;
}
