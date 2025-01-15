#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int k;
    cin >> k;

    stack<int> num;
    int newnum;
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> newnum;
        if (newnum != 0)
        {
            num.push(newnum);
            count++;
        }
        else
        {
            num.pop();
        }
    }

    int sum = 0;
    while (!num.empty())
    {
        sum += num.top();
        num.pop();
    }

    cout << sum << endl;

    return 0;
}