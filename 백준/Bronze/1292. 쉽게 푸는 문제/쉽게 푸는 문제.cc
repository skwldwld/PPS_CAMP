#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    int k = 1;
    while (true)
    {
        if (k * (k - 1) / 2 < end && end <= k * (k + 1) / 2)
            break;
        else
            k++;
    }

    int result = 0;
    int count = 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (end < count)
                break;
            result += i;
            count++;
            // cout << i << " ";
        }
    }

    k = 1;
    while (true)
    {
        if (k * (k - 1) / 2 < start && start <= k * (k + 1) / 2)
            break;
        else
            k++;
    }

    count = 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (start == count)
                break;
            result -= i;
            count++;
            // cout << i << " ";
        }
    }

    cout << result << endl;

    return 0;
}