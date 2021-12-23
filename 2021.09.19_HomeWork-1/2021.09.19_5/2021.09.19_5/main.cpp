// 5 задача
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    cin >> n;
    
    int a1 = n % 10;
    n /= 10;
    int a2 = n % 10;
    n /= 10;
    int a3 = n % 10;
    cout << a1 + a2 + a3 << endl;
    
    return EXIT_SUCCESS;
}
