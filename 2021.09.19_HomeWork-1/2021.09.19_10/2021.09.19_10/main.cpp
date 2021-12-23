//10 задача

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a = 0;
    int b = 0;
    
    cin >> a >> b;
    cout << (a + b) / 2 + abs((a - b) / 2) + (a + b) % 2 << endl;
    
    return EXIT_SUCCESS;
}
