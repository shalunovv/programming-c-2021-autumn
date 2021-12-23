#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a = 0;
    int b = 0;
    
    cin >> a >> b;
    
    for (int i = a; i <= b; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (j * j == i)
            {
                cout << i << " ";
                break;
            }
        }
    }
    
    cout << endl;
    
    return EXIT_SUCCESS;
}
