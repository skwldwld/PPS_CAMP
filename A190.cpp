#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int price = 0;
    if (a == b && b == c)
        price = 10000 + a * 1000;
    else if (a != b && b != c && a != c)
    {
        price = max(a, max(b, c)) * 100;
    }
    else
    {
        if (a == b)
            price = 1000 + a * 100;
        else if (b == c)
            price = 1000 + b * 100;
        else if (a == c)
            price = 1000 + a * 100;
    }

    cout << price << endl;

    return 0;
}