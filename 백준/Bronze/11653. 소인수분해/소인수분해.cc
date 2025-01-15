#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 2;
    while (n > 1)
    {
        if (n % a == 0)
        {
            n /= a;
            cout << a << endl;
        }
        else if (n % a != 0)
            a++;
        if (n < a)
            break;
    }

    return 0;
}