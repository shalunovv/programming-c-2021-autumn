#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    
    cin >> a >> b >> c;
    
    sum = a + b + c;
    c = max(max(a, b), c);
    b = min(min(a, b), c);
    a = sum - b - c;
    
    
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "impossible" << endl;
    }
    else if (a * a + b * b == c * c)
    {
        cout << "right" << endl;
    }
    else if (a * a + b * b > c * c)
    {
        cout << "acute" << endl;
    }
    else
    {
        cout << "obtuse" << endl;
    }
    
    return EXIT_SUCCESS;
}
