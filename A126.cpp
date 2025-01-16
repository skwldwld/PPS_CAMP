#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n)
{
    int hun = n / 100;
    int ten = n / 10 % 10;
    int one = n % 10;

    if (hun - ten == ten - one)
        return true;
    else
        return false;
}

int main()
{
    int x;
    cin >> x;

    int count = 0;
    if (x > 99)
        count = 99;
    else
        count = x;

    for (int i = 100; i <= x; i++)
    {
        if (check(i))
            count++;
    }

    cout << count << endl;

    return 0;
}