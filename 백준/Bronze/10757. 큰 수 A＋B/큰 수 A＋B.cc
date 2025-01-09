#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    vector<int> anum(a.length());
    for (int i = 0; i < a.length(); i++)
    {
        anum[i] = a[i] - '0';
    }
    vector<int> bnum(b.length());
    for (int i = 0; i < b.length(); i++)
    {
        bnum[i] = b[i] - '0';
    }
    reverse(anum.begin(), anum.end());
    reverse(bnum.begin(), bnum.end());

    int maxnum = max(anum.size(), bnum.size());
    vector<int> sum(maxnum + 1, 0);

    for (int i = 0; i < maxnum; i++)
    {
        if (i < anum.size())
            sum[i] += anum[i];
        if (i < bnum.size())
            sum[i] += bnum[i];

        if (sum[i] >= 10)
        {
            sum[i + 1]++;
            sum[i] -= 10;
        }
    }
    reverse(sum.begin(), sum.end());

    int start = 0;
    while (sum[start] == 0)
        start++;

    for (int i = start; i < sum.size(); i++)
    {
        cout << sum[i];
    }
    cout << endl;

    return 0;
}