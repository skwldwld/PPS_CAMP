#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, h, w;
    cin >> d >> h >> w;

    double n = static_cast<double>(d) / sqrt(h * h + w * w);

    cout << static_cast<int>(h * n) << " " << static_cast<int>(w * n) << endl;
    return 0;
}