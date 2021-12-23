//9 задача

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int x = 0;
    
    cin >> x;
    
    int t = x * x;
    cout << (t + x + 1) * t + x + 1 << endl;
    
    return EXIT_SUCCESS;
}
