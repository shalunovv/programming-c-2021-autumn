#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int sum = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        int a = 0;
        cin >> a;
        sum += a;
    }
    
    cout << sum << endl;
    
    return EXIT_SUCCESS;
}
