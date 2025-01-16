#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int longcount = 0;
    longcount = n / 4;

    for (int i = 0; i < longcount; i++)
    {
        cout << "long ";
    }
    cout << "int" << endl;

    return 0;
}