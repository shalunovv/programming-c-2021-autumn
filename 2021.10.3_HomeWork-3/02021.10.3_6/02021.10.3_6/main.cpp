#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int pos = 0;
    int neg = 0;
    int zero = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        int a = 0;
        cin >> a;
        
        if (a < 0)
        {
            neg++;
        }
        if (a == 0)
        {
            zero++;
        }
        if (a > 0)
        {
            pos++;
        }
    }
    
    cout << zero << " " << pos << " " << neg << endl;
    
    return EXIT_SUCCESS;
}
