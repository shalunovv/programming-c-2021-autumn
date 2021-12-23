#include "mylib.hpp"

using namespace std;

int three_n_plus_one (int n)
{
    int ans = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        ans++;
    }
    return ans;
}

void radius (int r)
{
    int p_0, p_1, f;
    for (int i = 0; i < 2 * r; i++) {
            f = -0.5 * (abs(i - r + 1) + abs(i - r)) + r + 0.5;
        if (f == r + 1)
            p_0 = sqrt(2 * r * (f - 1) - (f - 1) * (f - 1));
        else
            p_0 = sqrt(2 * r * (f - 1) - (f - 1) * (f - 1)) + 1;
        if (((int) sqrt(2 * r * f - f * f)) * ((int) sqrt(2 * r * f - f * f)) == (2 * r * f - f * f))
            p_1 = sqrt(2 * r * f - f * f);
        else
            p_1 = sqrt(2 * r * f - f * f) + 1;
        if (p_0 <= p_1) {
            for (int j = 0; j < r - p_1; j++)
                cout << "  ";
            for (int j = p_0; j <= p_1; j++)
                cout << "* ";
            for (int j = 1; j <= 2 * p_0 - 2; j++)
                cout << "  ";
            for (int j = p_0; j <= p_1; j++)
                cout << "* ";
            cout << endl;
        }
    }
}
