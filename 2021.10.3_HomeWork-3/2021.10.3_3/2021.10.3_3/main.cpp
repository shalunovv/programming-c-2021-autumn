#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int k = 1;
    int a = 1;
    
    cin >> n;
    
    for (int i = 0; (i < n) && (a <= n); ++i)
    {
        for (int j = 0; (j < k) && (a <= n); ++j)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
        k++;
    }
    
    return EXIT_SUCCESS;
}
