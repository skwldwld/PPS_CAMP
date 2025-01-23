#include <iostream>

using namespace std;

int combination(int n, int m)
{
    if (m == 0 || n == m)
        return 1;
    return combination(n - 1, m - 1) + combination(n - 1, m);
}

int main()
{
    int n, m;
    cin >> n >> m;

    int com = combination(n, m);

    int count = 0;
    for (int i = 5; i <= com; i *= 5)
    {
        count += com / i;
    }

    cout << count << endl;

    return 0;
}