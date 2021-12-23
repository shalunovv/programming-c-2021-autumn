#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int k = 0;
    int m = 0;
    int n = 0;
    int ans = 0;
    
    cin >> k >> m >> n;
    
    if (n <= k)
    {
        ans = 2 * m;
    }
    else if (2 * n % k == 0)
    {
        ans = (2 * n / k) * m;
    }
    else
    {
        ans = m * (1 + (2 * n / k));
    }
        
    cout << ans << endl;
    
    return EXIT_SUCCESS;
}
