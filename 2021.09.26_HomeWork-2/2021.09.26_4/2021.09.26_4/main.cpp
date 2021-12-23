#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
    cin >> a >> b >> c >> d;
    
    if (a == 0 && b == 0)
    {
        cout << "INF" << endl;
    }
    else if ((b % a == 0) && (-b / a * c + d != 0))
    {
        cout << -b / a << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return EXIT_SUCCESS;
}
