#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    cin >> count;

    vector<int> num(count);
    for (int i = 0; i < count; i++)
    {
        cin >> num[i];
    }

    vector<int> revnum(count);
    for (int i = 0; i < count; i++)
    {
        string s = to_string(num[i]);
        reverse(s.begin(), s.end());
        revnum[i] = stoi(s);
        // cout << revnum[i] << endl;
    }

    vector<int> sum(count, 0);
    vector<string> sumstring(count);
    for (int i = 0; i < count; i++)
    {
        sum[i] = num[i] + revnum[i];
        sumstring[i] = to_string(sum[i]);
    }

    vector<bool> yesorno(count, true);
    for (int i = 0; i < count; i++)
    {
        string &s = sumstring[i];
        for (int j = 0; j < s.length() / 2; j++)
        {
            if (s[j] != s[s.length() - 1 - j])
            {
                yesorno[i] = false;
                break;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (yesorno[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}