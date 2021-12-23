#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int pos1 = 0;
    int pos2 = 0;
    
    cin >> n >> pos1 >> pos2;
    cout << endl;
    for (int i = 31; i >= 0; --i)
    {
        if (n & (1 << i))
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;
    
    int mask = n;
    
    mask &= ~(1 << (pos1 - 1));
    mask &= ~(1 << (pos2 - 1));
    mask &= n;
    
    int bit1 = 0;
    int bit2 = 0;
    
    int t1 = pos1;
    int t2 = pos2;
    
    pos1 = min(t1, t2);
    pos2 = max(t1, t2);
    
    if (n & (1 << (pos1 - 1)))
    {
        bit1 |= (1 << (pos1 - 1));
    }
    if (n & (1 << (pos2 - 1)))
    {
        bit2 |= (1 << (pos2 - 1));
    }
    
    bit1 <<= (abs(pos1 - pos2));
    bit2 >>= (abs(pos1 - pos2));
    
    mask |= bit1;
    mask |= bit2;
    
    n = mask;
    
    for (int i = 31; i >= 0; --i)
    {
        if (n & (1 << i))
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;
    
    return EXIT_SUCCESS;
}
