#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int i, n, dobutok;
    
    cout << "Vvedit kilkist elementiv\n ";
    cin >> n;
    
    cout << "Vvedennya elementiv\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cout << "a[" << i << "]=" << a[i] << endl; 

    dobutok = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            dobutok = dobutok * a[i];    
    }

    cout << "dobutok= " << dobutok << endl;
    cin;

    return 0;
}
