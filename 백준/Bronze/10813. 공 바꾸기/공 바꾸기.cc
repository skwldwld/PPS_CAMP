#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> basket(n);
    for (int i = 0; i < n; i++)
    {
        basket[i] = i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        swap(basket[x - 1], basket[y - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << basket[i] << " ";
    }
    cout << endl;

    return 0;
}