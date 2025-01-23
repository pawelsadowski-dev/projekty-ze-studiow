/*autor: Pawel Sadowski*/
/* Program wypisuje wartrosc ASCII dla liczb calkowitych z zadanego zakresu */
#include <iostream>
using namespace std;

int main()
{
    int n_p,n_k;

    cin >> n_p >> n_k;

    for(int i=n_p; i <= n_k; i++)
    {
        cout << i << " - " << char(i);
        cout << endl;
    }
    return 0;
}
