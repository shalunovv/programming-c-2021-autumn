#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int m = 0;
    int k = 0;
    
    cin >> n >> m >> k;
    
    if (((k % n == 0) || (k % m == 0)) && (k < n * m))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return EXIT_SUCCESS;
}
