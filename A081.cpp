#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<vector<int>> v(t, vector<int>(10, 0));
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> v[i][j];
        }
        sort(&v[i][0], &v[i][10]);
        cout << v[i][7] << endl;
    }

    return 0;
}