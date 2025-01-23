#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        int width = 1;
        while (n > 0)
        {
            if (n % 10 == 0)
                width += 4;
            else if (n % 10 == 1)
                width += 2;
            else
                width += 3;

            width++;
            n /= 10;
        }

        cout << width << endl;
    }
    return 0;
}