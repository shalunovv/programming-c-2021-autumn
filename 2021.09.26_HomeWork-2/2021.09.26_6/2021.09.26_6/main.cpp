#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int fx = 0;
    int fy = 0;
    int ax = 0;
    int ay = 0;
    
    cin >> fx >> fy >> ax >> ay;
    
    if (fx == ax || fy == ay || abs(fx - ax) == abs(fy - ay))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return EXIT_SUCCESS;
}
