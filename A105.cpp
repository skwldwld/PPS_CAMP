#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 1(0, 0)1 / 1;

    // 2(0, 1)1 / 2;
    // 3(1, 0)2 / 1;

    // 4(2, 0)3 / 1;
    // 5(1, 1)2 / 2;
    // 6(0, 2)1 / 3;

    // 7(0, 3)1 / 4;
    // 8(1, 2)2 / 3;
    // 9(2, 1)3 / 2;
    // 10(4, 0)4 / 1;

    int x;
    cin >> x;

    int k = 1;
    while (true)
    {
        if (k * (k - 1) / 2 < x && x <= k * (k + 1) / 2)
            break;
        else
            k++;
    }

    int min, max;
    min = k * (k - 1) / 2 + 1;
    max = k * (k + 1) / 2;

    int idx;
    idx = x - min;

    int i, j;
    if (k % 2 == 0)
    {
        i = 1;
        j = max - min + 1;
        for (int n = 0; n < idx; n++)
        {
            i++;
            j--;
        }
    }
    else
    {
        i = max - min + 1;
        j = 1;
        for (int n = 0; n < idx; n++)
        {
            i--;
            j++;
        }
    }

    cout << i << "/" << j << endl;

    return 0;
}