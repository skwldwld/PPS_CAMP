#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long s, c;
    cin >> s >> c;

    long long l;
    long long count = 0;
    for (int i = 0; i < s; i++)
    {
        cin >> l;
        if (l > 175)
            count += (l % 175);
    }

    cout << count << endl;
    return 0;
}