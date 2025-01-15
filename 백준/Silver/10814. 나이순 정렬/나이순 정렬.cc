#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;

    pair<int, string> member;
    vector<pair<int, string>> members;
    for (int i = 0; i < n; i++)
    {
        cin >> member.first >> member.second;
        members.push_back(member);
    }

    stable_sort(members.begin(), members.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << members[i].first << " " << members[i].second << endl;
    }

    return 0;
}