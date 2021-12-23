#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int ans = 1;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        ans *= (i + 1);
    }
    
    cout << ans << endl;
    
    return EXIT_SUCCESS;
}
