#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int v;
    cin >> v;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] == v)
            count++;
    }

    cout << count << endl;

    return 0;
}