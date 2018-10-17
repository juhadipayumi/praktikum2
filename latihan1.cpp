#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cout<<"masukan bilangan1: ";
    cin >> A;
    cout<<"masukan bilangan2: ";
    cin>> B;
    cout<<"masukan bilangan3: ";
    cin >> C;

    if (A>B && B>C) cout << "bilangan terbesar =" << A << endl;
    else
    {
    if (B>A && B>C) cout << "bilangan terbesar = " << B << endl;
        else
            cout << "bilangan terbesar = " << C;

    }

}
