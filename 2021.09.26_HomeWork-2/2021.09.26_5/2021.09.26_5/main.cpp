#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    cin >> n;
    
    if (n % 4 == 0 || n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return EXIT_SUCCESS;
}
