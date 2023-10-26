#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int g(int a, int m, int c)
{
    return (a - m + c) % 10;
}

int f(int a, int m, int c, int level, int& depth)
{
    if (level > depth)
        depth = level;

    if (m <= 9 && m >= 0)
        return m;
    else
        return g(a, m, c) * f(a, m - 1 - g(a, m, c), c, level + 1, depth) + m;
}

int main()
{
    int a, m, c, depth = 0;

    cout << "a = "; cin >> a;
    cout << "m = "; cin >> m;
    cout << "c = "; cin >> c;

    int res = f(a, m, c, 1, depth);

    cout << "res = " << res << " depth = " << depth;
}