#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int i, n, dobutok;


    //Кількість елементів масиву що будуть ініцілізуватись:
    cout << "Vvedit kilkist elementiv\n ";
    cin >> n;

    //Ввведення елементів
    cout << "Vvedennya elementiv\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cout << "a[" << i << "]=" << a[i] << endl; //виведення елементів масиву

    dobutok = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            dobutok = dobutok * a[i];    //множимо елементи масиву
    }

    cout << "dobutok= " << dobutok << endl;
    cin;

    return 0;
}
