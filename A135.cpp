#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> book(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, book[i]);
    }

    sort(book.begin(), book.end());

    int idx = 0;
    vector<int> count(n, 0);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (book[i].compare(book[j]) == 0)
                // idx = j;
                count[i]++;
            else
                continue;

            if (count[i] > max)
            {
                max = count[i];
                idx = i;
            }
        }
    }

    cout << book[idx] << endl;

    return 0;
}