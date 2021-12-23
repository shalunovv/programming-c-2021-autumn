#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int x = 0;
    
    cin >> x;
    
    for (int i = 1; i <= x; ++i)
    {
        if (x % i == 0)
        {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return EXIT_SUCCESS;
}
