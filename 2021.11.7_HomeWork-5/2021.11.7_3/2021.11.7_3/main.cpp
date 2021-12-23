#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    cin >> n;
    
    int minus_flag = n >> 31;
    int y =  minus_flag ^ n;
    y -= minus_flag;
    
    cout << y << endl;
    
    return EXIT_SUCCESS;
}
